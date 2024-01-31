package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void onBtnClick(View View){
        TextView txtHello=findViewById(R.id.txtMessage);
        EditText edtTxt=findViewById(R.id.editTextView);
        txtHello.setText(edtTxt.getText().toString());

    }
}