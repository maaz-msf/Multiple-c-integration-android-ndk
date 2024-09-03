#include <jni.h>
#include <string>
#include "dum.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_msf_experimental_Init_doMaths(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement doMaths()
    return multiply(a, b);
}