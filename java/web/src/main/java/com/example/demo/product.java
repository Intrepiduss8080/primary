package com.example.demo;

import jakarta.persistence.*;

@Entity
@Table(name="catalog")


public class product {
    
    @Id
    @Column(name="id", nullable = false, unique=true, length=70)
    private int id;

    @Column(name="name", nullable = false, unique=false, length=70)
    private String name;

    @Column(name="article", nullable = false, unique=false, length=70)
    private String article;

    @Column(name="category", nullable = false, unique=false, length=70)
    private String category;

    @Column(name="price", nullable = false, unique=false, length=70)
    private float price;

    public product() {}

    public int getId()
    {
        return id;
    }

    public String getName()
    {
        return name;
    }

    public String getArticle()
    {
        return article;
    }

    public String getCategory()
    {
        return category;
    }

    public float getPrice()
    {
        return price;
    }



    public void setId(int id)
    {
        this.id = id;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public void setArticle(String article)
    {
        this.article = article;
    }

    public void setCategory(String category)
    {
        this.category = category;
    }

    public void setPrice(float price)
    {
        this.price = price;
    }
}
