package com.msf.experimental;

public class Init {

    static {
        System.loadLibrary("experimental");
    }
    public native int doMaths(int a, int b);
}
