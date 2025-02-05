//  C Program to Simulate an Online Shopping System

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define MAX_PRODUCTS 100
#define MAX_CART_ITEMS 50

struct Product
{
    int productID;
    char name[50];
    float price;
};

struct CartItem
{
    int productID;
    int quantity;
};

struct PurchaseHistory
{
    char date[20];
    struct CartItem items[MAX_CART_ITEMS];
    int numItems;
    float totalAmount;
};

struct Product products[MAX_PRODUCTS];
int productCount = 0;

struct CartItem cart[MAX_CART_ITEMS];
int cartCount = 0;


void addProduct(void);
void displayProduct(void);
void addToCart(void);
void viewCart(void);
void checkout(void);
void viewPurchaseHistory(void);
void getCurrentDate(char *date);


int main(void)
{
    int option;

    do
    {
        printf("========= MENU =========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Add to Cart\n");
        printf("4. View Cart\n");
        printf("5. Checkout\n");
        printf("6. View Purchase History\n");
        printf("0. Exit\n");
        printf("Enter the option (0-6): ");
        scanf("%d", &option);
        printf("\n");

        switch (option)
        {
            case 1:
                addProduct();
                break;
            case 2:
                displayProduct();
                break;
            case 3:
                addToCart();
                break;
            case 4:
                viewCart();
                break;
            case 5:
                checkout();
                break;
            case 6:
                viewPurchaseHistory();
                break;
            case 0:
                printf("EXITING!!!\n");
                break;
            default:
                printf("ERROR: Invalid option, please try again\n\n");
        }
    }
    while (option != 0);

    return 0;
}

void addProduct(void)
{
    if (productCount >= MAX_PRODUCTS)
    {
        printf("ERROR: Cannot add more products! The product list is full\n");
        return;
    }

    FILE *pfile; 
    pfile = fopen("products.txt", "a+");  // opens a file in both read and write mode

    if (pfile == NULL)
    {
        printf("ERROR: Could not save products to file\n");
        return;
    }
    else
    {
        printf("Enter product id: ");
        scanf("%d", &products[productCount].productID);
        printf("Enter product name: ");
        scanf(" %[^\n]s", products[productCount].name);
        printf("Enter product price: ");
        scanf("%f", &products[productCount].price);

        fprintf(pfile, "ID: %d | NAME: %s | PRICE: $%.2f\n", products[productCount].productID, products[productCount].name, products[productCount].price);

        printf("\nProduct added successfully!\n\n");

        productCount++;
    }

    fclose(pfile);
}

void displayProduct(void)
{
    if (productCount == 0)
    {
        printf("ERROR: No products to display\n\n");
    }
    else
    {
        printf("===== PRODUCT LIST =====\n");
        for (int i = 0; i < productCount; i++)
        {
            printf("ID: %d | NAME: %s | PRICE: $%.2f\n", products[i].productID, products[i].name, products[i].price);
        }
        printf("\n");
    }
}

void addToCart(void)
{
    int productID = 0, quantity = 0;
    bool found = false;

    if (cartCount >= MAX_CART_ITEMS)
    {
        printf("ERROR: Cannot add more items! The cart is full\n");
        return;
    }

    printf("Enter product id to add to the cart: ");
    scanf("%d", &productID);

    for (int i = 0; i < productCount; i++)
    {
        if (productID == products[i].productID)
        {
            printf("Enter quantity for product id/name '%d'/'%s': ", productID, products[i].name);
            scanf("%d", &quantity);

            if (quantity <= 0)
            {
                printf("ERROR: Invalid quantity\n");
                return;
            }

            cart[cartCount].productID = productID;
            cart[cartCount].quantity = quantity;

            printf("\nProduct successfully added to the cart!\n\n");
            cartCount++;
            found = true;
            break;
        }
    }

    if (found == false)
    {
        printf("\nERROR: Product not found, please try again\n\n");
        return;
    }
}

void viewCart(void)
{
    if (cartCount == 0)
    {
        printf("ERROR: Your cart is empty\n\n");
    }
    else
    {
        float total = 0;

        printf("====== CART ITEMS ======\n");
        for (int c = 0; c < cartCount; c++)
        {   
            for (int p = 0; p < productCount; p++)
            {
                if (cart[c].productID == products[p].productID)
                {
                    float cost = products[p].price * cart[c].quantity; // price of 1 * quantity

                    printf("PRODUCT: %s | PRICE: $%.2f | QUANTITY: %d | COST: $%.2f\n", products[p].name, products[p].price, cart[c].quantity, cost);

                    total = total + cost;

                    break;
                }
            }
        }

        printf("Total: $%.2f\n\n", total);
    }
}

void checkout(void)
{   
    if (cartCount == 0) 
    {
        printf("ERROR: Cart is empty, add items before checkout\n\n");
        return;
    }
    else
    {
        struct PurchaseHistory history;
        
        float total = 0;
        int productID = 0;

        getCurrentDate(history.date);
        history.numItems = cartCount;

        for (int c = 0; c < cartCount; c++)
        {
            history.items[c] = cart[c];  // productId and quantity of cart stored in history
            
            for (int p = 0; p < productCount; p++)
            {
                if (products[p].productID == cart[c].productID)
                {
                    productID = cart[c].productID;
                    
                    total += products[p].price * cart[c].quantity;
                    break;
                }
            }
        }

        history.totalAmount = total;

        FILE *hfile;
        hfile = fopen("history.txt", "a+");
        
        if (hfile == NULL)
        {
            printf("ERROR: Could not find the history file\n");
            return;
        }

        for (int c = 0; c < cartCount; c++)
        {
            for (int p = 0; p < productCount; p++)
            {
                if (products[p].productID == cart[c].productID)
                {
                    float cost = products[p].price * cart[c].quantity;
                    
                    fprintf(hfile, "ITEM NUMBER: %d --> DATE: %s | PRODUCT ID: %d | NAME: %s | PRICE: $%.2f | QUANTITY: %d | COST: $%.2f | TOTAL: $%.2f\n", 
                            c + 1, history.date, products[p].productID, products[p].name, products[p].price, cart[c].quantity, cost, total);
                    
                    break;
                }
            }
        }

        fclose(hfile);

        printf("Checkout successful! Total Amount: $%.2f\n\n", total);

        // clear the cart after checkout
        cartCount = 0;
        for (int i = 0; i < MAX_CART_ITEMS; i++) 
        {
            cart[i].productID = 0;
            cart[i].quantity = 0;
        }
    }
}

void viewPurchaseHistory(void)
{   
    FILE *hfile;
    hfile = fopen("history.txt", "r"); // Open the history file in read mode

    if (hfile == NULL)
    {
        printf("ERROR: No purchase history found\n\n");
        return;
    }

    char line[500]; // Buffer to read each line from the file
    printf("=== PURCHASE HISTORY ===\n");

    while (fgets(line, sizeof(line), hfile))
    {
        printf("%s", line); // Print each line from the history file
    }

    fclose(hfile);

    printf("\n");
}


// Code Generated by AI to Get Current Date:
void getCurrentDate(char *date)
{
    time_t t = time(NULL);              // Get current time
    struct tm *currentTime = localtime(&t); // Convert to local time

    // Format the date using sprintf and store it in the provided array
    sprintf(date, "%02d-%02d-%d", 
            currentTime->tm_mday,               // Day of the month
            currentTime->tm_mon + 1,            // Month (1-based, so add 1)
            currentTime->tm_year + 1900);       // Year (add 1900 to tm_year)
}



/* XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

C Program to Simulate an Online Shopping Platform. The program is designed to assist users
in managing products, shopping carts, and generating purchase history reports. The 
implementation utilizes structures to represent products, shopping cart items, 
and purchase history entries. File handling is employed to persistently store 
and retrieve data in files named "products.txt" and "history.txt."

Program uses following structures:
struct Product {
	int productID;
	char name[50];
	float price;
};	
struct CartItem {
	int productID;
	int quantity;
};
struct Purchase History {
	char date[20];
	struct CartItem items[MAX_CART_ITEMS];
	int numitems;
	float totalAmount;
};

The program provide following menu:
1. Add Product
2. Display Products
3. Add to Cart
4. View Cart
5. Checkout
6. View Purchase History

Implement functions for adding products, displaying products, Add to Carts, View Cart,
checkout and purchase history. Ensure proper error handling for file operations.

Note: Pay attention to details such as reading and writing data in the correct format,
      handling situations where the file may not exist or is not accessible, and providing
      appropriate user feedback for each operation.

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */

