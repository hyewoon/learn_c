package com.example.adapter_binding

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class CustomAdapter(private val dataSet : ArrayList<String>) : RecyclerView.Adapter<CustomAdapter.ViewHolder>() {


    class ViewHolder(view : View) :RecyclerView.ViewHolder(view) {

        val myText : TextView

        init {
            myText = view.findViewById(R.id.myText)
        }

    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.test_row_item,parent,false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        holder.myText.text = dataSet[position]
        holder.myText.setText("올리고")
    }

    override fun getItemCount(): Int {
        return dataSet.size
    }
}