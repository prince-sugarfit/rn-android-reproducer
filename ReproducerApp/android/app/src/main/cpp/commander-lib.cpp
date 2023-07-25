#include <jni.h>
#include <string>
 
extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi3(JNIEnv *env, jobject thiz, jint i) {
    return (i % 8);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi4(JNIEnv *env, jobject thiz, jint i,
                                                               jint i3) {
    return (i - i3);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi5(JNIEnv *env, jobject thiz, jint i2,
                                                               jint i3) {
    return (i2 + i3);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi6(JNIEnv *env, jobject thiz, jint i5) {
    return (i5 % 8);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi7(JNIEnv *env, jobject thiz, jint i6,
                                                               jint i5) {
    return (i6 != 0 ? (8 - i6) + i5 : i5);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi8(JNIEnv *env, jobject thiz, jint i4) {
    return (i4 / 8);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi9(JNIEnv *env, jobject thiz, jint i7) {
    return (i7 / 8);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi10(JNIEnv *env, jobject thiz,
                                                                jint i7) {
    return 0;
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderi11(JNIEnv *env, jobject thiz, jint i8,
                                                                jint i10) {
    return i8 + i10;
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_checkForNextStep(JNIEnv *env, jobject thiz,
                                                                 jint i10, jint i9) {
    return (i10 < i9);
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_commander3(JNIEnv *env, jobject thiz, jint i10,
                                                           jint i13) {
    return (i10 * 8) + i13;
}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_getCommanderMin(JNIEnv *env, jobject thiz, jint i9,
                                                                jint i10) {
    if (3 < (i9 - i10)) {
        return 3;
    } else {
        return (i9 - i10);
    }
}

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_commander1(JNIEnv *env, jobject thiz, jint i11,
                                                           jint min) {
    int nativeUnsignedNumberI11 = (int) i11;
    if (i11 <= 255) {
        jbyte a[] = {2, 35, static_cast<jbyte>(i11), static_cast<jbyte>((min - 1))};
        jbyteArray ret = env->NewByteArray(4);
        env->SetByteArrayRegion(ret, 0, 4, a);
        return ret;
    } else {
        jbyte a[] = {2, -77, 7, static_cast<jbyte>(i11), static_cast<jbyte>((i11 >> 8)),
                     static_cast<jbyte>((min - 1))};
        jbyteArray ret = env->NewByteArray(6);
        env->SetByteArrayRegion(ret, 0, 6, a);
        return ret;
    }

}

extern "C"
JNIEXPORT jint JNICALL
Java_fit_cure_android_abottCgm_RNAbottCgmModule_commander2(JNIEnv *env, jobject thiz, jint i12,
                                                           jint i13) {
    return (i12 * 8) + i13 + 1;
}
