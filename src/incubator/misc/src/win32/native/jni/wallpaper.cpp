/*
 * Copyright (C) 2004 Sun Microsystems, Inc. All rights reserved. Use is
 * subject to license terms.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 */

#include <stdio.h>
#include <windows.h>
#include <jni.h>
#include "wallpaper.h"

/* Inaccessible static: _miscLibraryLoaded */
/*
 * Class:     org_jdesktop_jdic_misc_Wallpaper
 * Method:    nativeSetWallpaper
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_jdesktop_jdic_misc_impl_WinWallpaper_nativeSetWallpaper
  (JNIEnv * env, jclass clazz, jstring prompt, jint mode)
{

  const char* msg=env->GetStringUTFChars(prompt,0);
  SystemParametersInfo (SPI_SETDESKWALLPAPER, (UINT) NULL, (PVOID) msg, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
  env->ReleaseStringUTFChars(prompt, msg);
  
  return 0;
}



