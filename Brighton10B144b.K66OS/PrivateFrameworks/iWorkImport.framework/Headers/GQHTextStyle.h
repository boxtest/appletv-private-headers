/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQHTextStyle : NSObject {
}
+ (GSFontRef)createFontFromName:(CFStringRef)name size:(float)size;	// 0x368e4cb1
+ (BOOL)getDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x368e56bd
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state;	// 0x368e4f39
+ (void)mapStyle:(id)style style:(id)style2 state:(id)state isSpan:(BOOL)span;	// 0x368e4f5d
+ (const char *)name;	// 0x368e56b1
+ (CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)fontName;	// 0x368e4d89
+ (BOOL)platformGetDefaultLineHeight:(CFStringRef)height fontSize:(float)size defLineHeight:(int *)height3;	// 0x368e4ead
+ (void)reduceFontSizeForSuperscriptedText:(id)superscriptedText style:(id)style state:(id)state;	// 0x368e56e1
@end
