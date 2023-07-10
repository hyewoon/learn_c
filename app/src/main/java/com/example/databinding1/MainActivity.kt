package com.example.databinding1

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.databinding.DataBindingUtil
import com.example.databinding1.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = DataBindingUtil.setContentView(this, R.layout.activity_main)

        binding.databindingEx.text = "바뀐 텍스트"

        binding.databindingEx.setOnClickListener {

            val intent = Intent(this, SecondActivity::class.java)
            startActivity(intent)
        }

    }
}