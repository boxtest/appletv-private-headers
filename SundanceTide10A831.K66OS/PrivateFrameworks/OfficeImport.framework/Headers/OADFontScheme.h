/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface OADFontScheme : NSObject {
	NSMutableDictionary *mMajorFont;	// 4 = 0x4
	NSMutableDictionary *mMinorFont;	// 8 = 0x8
}
+ (void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;	// 0x36aa6a55
- (id)init;	// 0x369e1821
- (void)dealloc;	// 0x369e6aad
- (id)fontForFontSchemeRef:(id)fontSchemeRef;	// 0x36b0b5c5
- (BOOL)isFontSchemeRef:(id)ref;	// 0x36a45071
- (id)majorFont;	// 0x369e91b1
- (unsigned)majorFontCount;	// 0x36c15fe1
- (id)majorTypefaceForScript:(id)script;	// 0x36b0b8dd
- (id)minorFont;	// 0x369e944d
- (unsigned)minorFontCount;	// 0x36c16001
- (id)minorTypefaceForScript:(id)script;	// 0x36b0b69d
@end
