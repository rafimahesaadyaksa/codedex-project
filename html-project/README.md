# Proyek Menu Restoran - The Origins I: HTML

Ini adalah proyek latihan saya dari kurikulum [Codédex](https://www.codedex.io/).

## Tentang Proyek
Proyek ini dibuat untuk menyelesaikan tugas akhir pada chapter "The Origins I: HTML". Tujuannya adalah untuk menerapkan dasar-dasar struktur HTML, penggunaan tag semantik, dan pembuatan form.

## Link Sumber
Kamu bisa melihat instruksi tugas asli di sini: https://www.codedex.io/html/final-project

# Final Project: The Origins I - HTML

Congratulations on finishing all of the chapters in The Origins I: HTML! Now let's use the skills we've gained throughout the course to build out your first project! 💫

You have the option to choose between two projects:
* **Restaurant Menu:** Your menu, your rules. Italian, Mexican, Greek…? What cuisine will you curate? Create a page in HTML of a full fledged restaurant menu that includes a form for placing an order!
* **Link in Bio:** An “all-in-one” HTML website where you get to link your social media, blog, projects, github, and more! CSS is included so you can customize if you're familiar, or up for the challenge.

---

## Option 1: Restaurant Menu

Create a new file called `restaurant_menu.html`, or create a new HTML/CSS/JS project on Codédex Builds.

You can be as creative as you want with the name and menu items for the restaurant; it can be real or fictional. However, you should include the following:

### Requirements

* **Basic Structure:**
  * The HTML file should be properly structured (Hint: start with `<!DOCTYPE html>`).
  * A `<title>` element with the restaurant name should be included in the `<head>` element.
* **Header Section:**
  * An image with an `id` of `"header-img"`.
  * A `<h1>` heading element with the name of the restaurant.
  * A navigation section with two headings linking to `"#menu"` and `"#order-form"`.
* **Main Section (Menu & Order Form):**
  * Featuring two sections, each with a `<h2>` heading that says "Menu" and "Place Your Order".
  * **Menu Section:** Should have at least three `<article>` elements for the menu items that use the following elements:
    * An `<img>` image element.
    * A `<h3>` element for the name of the menu item.
    * A `<p>` paragraph element that briefly describes the item (1-2 sentences) and includes price information (*italicized*).
  * **Place Your Order Section:** Must include a `<form>` element with the following inputs:
    * Number inputs for each menu item (make sure to validate input with a minimum of `0`).
    * Radio and/or checkbox inputs for things like sides and add-ons.
    * At least one `<textarea>` element for one of the items (for special requests).
    * A submit input that says "Go To Checkout".
    * *Note: Make sure to include a `<label>` element for each `<input>` element.*
* **Footer Section:**
  * A footer that includes a `<p>` paragraph element that reads "Made with love by " followed by your Codédex username.

### Bonus
Please feel free to use the `style` attribute or `<style>` element to give your menu some flair! Revisit the "Power Rangers" challenge for a refresher.
