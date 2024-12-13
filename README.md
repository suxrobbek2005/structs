# C Programming Structs Project

## Overview

This project contains a series of exercises focused on `struct` usage in C programming. The exercises cover various real-life scenarios where structs are used to represent entities like users, phones, cars, grocery items, and more. Each exercise showcases how to define structs, store data, and process information based on specific conditions.

## Table of Contents

1. **User Information Management**
2. **Phone Information**
3. **Car Information**
4. **Market Products Information**
5. **Credit Card Information**
6. **Author and Book Information**
7. **Company and Product Management**
8. **Movie Collection by Genre**
9. **Student Grades and Subjects**
10. **Sports Teams Management**

## Struct Definitions

### 1. Foydalanuvchi Ma'lumotlarini Boshqarish (User Information Management)

- **User** struct contains:
  - `first_name` (char[])
  - `last_name` (char[])
  - `birth_year` (int)
  - `location` (char[])
  - `phone` (char[])

**Example Output:**

```
Foydalanuvchilar Jadvali
First Name | Last Name | Birth Year | Location | Phone
------------------------------------------------------
John       | Doe       | 1990       | Tashkent | +998901234567
Jane       | Smith     | 1985       | Samarkand| +998901234568
Ali        | Karimov   | 2000       | Bukhara  | +998901234569
```

### 2. Telefon Ma'lumotlari (Phone Information)

- **Phone** struct contains:
  - `name` (char[])
  - `brand` (char[])
  - `price` (int)
  - `ram` (char[])
  - `color` (char[])

**Example Output:**

```
Narxi $500 dan yuqori telefonlar:
Name         | Brand    | Price | RAM | Color
------------------------------------------------
Galaxy S20   | Samsung  | 800   | 8GB | Black
iPhone 12    | Apple    | 1000  | 6GB | White
Pixel 6      | Google   | 600   | 8GB | Blue
```

### 3. Mashina Ma'lumotlari (Car Information)

- **Car** struct contains:
  - `model` (char[])
  - `brand` (char[])
  - `price` (int)
  - `year` (int)

**Example Output:**

```
Eng qimmat mashina:
Model       | Brand   | Price | Year
-----------------------------------------
Rolls Royce | Rolls   | 150000| 2021
```

### 4. Bozor Mahsulotlari Ma'lumotlari (Market Products Information)

- **Grocery** struct contains:
  - `name` (char[])
  - `category` (char[])
  - `price` (float)
  - `quantity` (int)

**Example Output:**

```
Sut mahsulotlari:
Name            | Category  | Price | Quantity
---------------------------------------------------
Milk            | Dairy     | 2.5   | 20
Cheese          | Dairy     | 5.0   | 10
Yogurt          | Dairy     | 1.5   | 50
```

### 5. Kredit Kartalari Ma'lumotlari (Credit Card Information)

- **Card** struct contains:
  - `card_holder_name` (char[])
  - `card_number` (char[])
  - `expiry_date` (char[])
  - `cvv` (int)

**Example Output:**

```
Amal qilayotgan kartalar:
Card Holder Name | Card Number  | Expiry Date | CVV
---------------------------------------------------------
John Doe         | 1234 5678 9012 3456 | 12/25       | 123
Jane Smith       | 2345 6789 0123 4567 | 11/24       | 456
```

### 6. Muallif va Kitob Ma'lumotlari (Author and Book Information)

- **Author** struct contains:
  - `name` (char[])
  - `birth_year` (int)

- **Book** struct contains:
  - `title` (char[])
  - `price` (float)
  - `published_year` (int)
  - `author` (nested Author struct)

**Example Output:**

```
1980-yildan keyin tug'ilgan mualliflarning kitoblari:
Title           | Price | Published Year | Author Name | Author Birth Year
----------------------------------------------------------------------------
Book A          | 25    | 2021            | Alex Black  | 1990
Book B          | 30    | 2023            | Mary White  | 1985
```

### 7. Kompaniya va Mahsulot Boshqaruvi (Company and Product Management)

- **Company** struct contains:
  - `name` (char[])
  - `location` (char[])

- **Product** struct contains:
  - `name` (char[])
  - `price` (float)
  - `quantity` (int)
  - `company` (nested Company struct)

**Example Output:**

```
AQShda ishlab chiqarilgan mahsulotlar:
Name         | Price | Quantity | Company Name | Company Location
-------------------------------------------------------------------
Product 1    | 50    | 100      | Company A    | USA
Product 2    | 30    | 200      | Company B    | USA
```

### 8. Janr bo'yicha Kino Kolleksiyasi (Movie Collection by Genre)

- **Genre** struct contains:
  - `name` (char[])
  - `description` (char[])

- **Movie** struct contains:
  - `name` (char[])
  - `rating` (float)
  - `release_year` (int)
  - `genre` (nested Genre struct)

**Example Output:**

```
"Action" janridagi kinolar:
Name           | Rating | Release Year | Genre Name  | Genre Description
--------------------------------------------------------------------------
Movie A        | 8.5    | 2022         | Action      | Action-packed thriller
Movie B        | 9.0    | 2023         | Action      | High-octane adventure
```

### 9. Talaba Baholari va Fanlar (Student Grades and Subjects)

- **Student** struct contains:
  - `first_name` (char[])
  - `last_name` (char[])

- **Subject** struct contains:
  - `name` (char[])

- **Score** struct contains:
  - `score` (float)

**Example Output:**

```
O'rtacha bahodan yuqori ball to'plagan talabalar:
First Name | Last Name | Subject Name  | Score
------------------------------------------------
John       | Doe       | Math          | 85
Jane       | Smith     | Physics       | 90
```

### 10. Sport Jamoalari Boshqaruvi (Sports Teams Management)

- **Stadium** struct contains:
  - `name` (char[])
  - `capacity` (int)

- **Team** struct contains:
  - `team_name` (char[])
  - `coach` (char[])
  - `players_count` (int)
  - `founded_year` (int)
  - `stadium` (nested Stadium struct)

**Example Output:**

```
Eng eski jamoa:
Team Name    | Coach       | Players Count | Founded Year | Stadium Name
----------------------------------------------------------------------
Team A       | Coach A     | 11            | 1950         | Stadium A
```
