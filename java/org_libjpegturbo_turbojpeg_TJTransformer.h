/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libjpegturbo_turbojpeg_TJTransformer */

#ifndef _Included_org_libjpegturbo_turbojpeg_TJTransformer
#define _Included_org_libjpegturbo_turbojpeg_TJTransformer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_libjpegturbo_turbojpeg_TJTransformer
 * Method:    setICCProfile
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJTransformer_setICCProfile
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJTransformer
 * Method:    bufSize
 * Signature: (Lorg/libjpegturbo/turbojpeg/TJTransform;)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJTransformer_bufSize
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJTransformer
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJTransformer_init
  (JNIEnv *, jobject);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJTransformer
 * Method:    transform
 * Signature: ([BI[[B[Lorg/libjpegturbo/turbojpeg/TJTransform;)[I
 */
JNIEXPORT jintArray JNICALL Java_org_libjpegturbo_turbojpeg_TJTransformer_transform
  (JNIEnv *, jobject, jbyteArray, jint, jobjectArray, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
