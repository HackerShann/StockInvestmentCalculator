# Stock Investment Performance Calculator

This program calculates the realized gains or losses of a stock investment transaction based on user input. It accounts for the cost and selling price of shares, along with transaction commissions, and provides a summary of the financial performance of the investment.

## Features
- Input company name, stock symbol, number of shares, cost per share, and selling price per share.
- Calculate and display:
  - Total cost (including buying commissions).
  - Total proceeds (after selling commissions).
  - Total commissions paid.
  - Realized gains or losses with percentage change.

## How It Works
The program takes user input, performs calculations based on the data provided, and outputs a detailed report summarizing the financial outcomes of the stock transaction.

### Example Output
```
Stock Investment Performance Calculator...

Company Name (No Spaces) & Symbol:       Tesla TSLA
Number of Shares Transacted:             10
Cost per Share (@ buying):               200
Price per Share (@ selling):             250

Realized Gains/Losses Report...
---------------------------------
Stock:               Tesla (TSLA)
Quantity:            10 shares.

Total Cost:          $2040
Total Proceeds:      $2450
Commissions:         $90
Gains/Losses:        $410 (20.1%)
```

## Code Overview
The program is written in C++ and performs the following steps:
1. Prompts the user to enter details about the stock transaction.
2. Calculates the total cost of shares bought, including buying commissions.
3. Calculates the total proceeds from selling shares, subtracting selling commissions.
4. Computes the total commissions paid.
5. Determines the realized gains or losses and their percentage change.
6. Outputs a detailed summary report.

### Constants Used
- `commissionTrade`: The commission rate for each transaction (2%).

## How to Run
1. Compile the program using a C++ compiler (e.g., `g++`):
   ```bash
   g++ -o stock_calculator stock_calculator.cpp
   ```
2. Run the compiled program:
   ```bash
   ./stock_calculator
   ```
3. Follow the prompts to input the required data.

## Inputs
- **Company Name and Symbol**: Name of the company and stock symbol (e.g., `Tesla TSLA`).
- **Number of Shares Transacted**: Total shares bought or sold.
- **Cost per Share (@ buying)**: Price per share when purchased.
- **Price per Share (@ selling)**: Price per share when sold.

## Outputs
- **Total Cost**: Total investment, including buying commissions.
- **Total Proceeds**: Total revenue after selling commissions.
- **Commissions**: Total commissions paid.
- **Gains/Losses**: Net profit or loss and percentage change.

## Example Calculation
For a stock transaction where:
- Number of shares = 10
- Cost per share = $200
- Price per share = $250

The program calculates:
- Total cost = $2040 (including 2% buying commission).
- Total proceeds = $2450 (after 2% selling commission).
- Total commissions = $90.
- Realized gains = $410 (20.1% gain).

## Requirements
- A C++ compiler to run the program.
- Basic knowledge of stock trading terminology.
