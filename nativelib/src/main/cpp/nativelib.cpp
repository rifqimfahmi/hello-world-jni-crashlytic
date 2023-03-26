#include <jni.h>
#include <string>

int throwSomeException() {
    throw std::invalid_argument("Throwing something here hah!");
}

extern "C" JNIEXPORT jstring JNICALL
Java_dev_rifqimfahmi_nativelib_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    throwSomeException();
    std::string hello2 = "Hello from C++ v2";
    return env->NewStringUTF(hello.c_str());
}