/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper */

#ifndef _Included_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
#define _Included_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
#ifdef __cplusplus
extern "C" {
#endif
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_CLASSES_ROOT
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_CLASSES_ROOT -2147483648L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_CURRENT_USER
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_CURRENT_USER -2147483647L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_LOCAL_MACHINE
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_HKEY_LOCAL_MACHINE -2147483646L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_ERROR_SUCCESS
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_ERROR_SUCCESS 0L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_MAX_KEY_LENGTH
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_MAX_KEY_LENGTH 255L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_OPENED_KEY_HANDLE
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_OPENED_KEY_HANDLE 0L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_ERROR_CODE
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_ERROR_CODE 1L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_SUBKEYS_NUMBER
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_SUBKEYS_NUMBER 0L
#undef org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_KEY_READ
#define org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_KEY_READ 131097L
/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    RegOpenKey
 * Signature: (I[BI)[I
 */
JNIEXPORT jintArray JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_RegOpenKey
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    RegCloseKey
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_RegCloseKey
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    RegQueryValueEx
 * Signature: (I[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_RegQueryValueEx
  (JNIEnv *, jclass, jint, jbyteArray);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    AssocQueryString
 * Signature: (III)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_AssocQueryString
  (JNIEnv *, jclass, jbyteArray, jbyteArray);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    ExpandEnvironmentStrings
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_ExpandEnvironmentStrings
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    resolveLinkFile
 * Signature: ([B)[B
 */
JNIEXPORT jstring JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_resolveLinkFile
  (JNIEnv *, jclass, jbyteArray);
  
/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    shellExecute
 * Signature: ([B)[B
 */
JNIEXPORT jint JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_shellExecute
  (JNIEnv *, jclass, jbyteArray, jbyteArray);
    
/* Inaccessible static: RESERVED_TARGET_NAMES */
/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    shutDown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_shutDown
  (JNIEnv *, jclass);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    nativeBrowseURLInIE
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_nativeBrowseURLInIE
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper
 * Method:    openMapiMailer
 * Signature: ([Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jdesktop_jdic_desktop_internal_impl_WinAPIWrapper_openMapiMailer
  (JNIEnv *, jclass, jobjectArray, jobjectArray, jobjectArray, jstring, jstring, jobjectArray);



#ifdef __cplusplus
}
#endif
#endif
