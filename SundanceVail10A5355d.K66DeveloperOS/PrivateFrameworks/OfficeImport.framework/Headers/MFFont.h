/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MFFont : NSObject <MFObject> {
	long m_lfHeight;	// 4 = 0x4
	long m_lfWidth;	// 8 = 0x8
	long m_lfEscapement;	// 12 = 0xc
	long m_lfOrientation;	// 16 = 0x10
	long m_lfWeight;	// 20 = 0x14
	bool m_lfItalic;	// 24 = 0x18
@private
	bool m_lfUnderline;	// 25 = 0x19
@protected
	bool m_lfStrikeOut;	// 26 = 0x1a
	int m_lfCharSet;	// 28 = 0x1c
	int m_lfOutPrecision;	// 32 = 0x20
	unsigned char m_lfClipPrecision;	// 36 = 0x24
	int m_lfQuality;	// 40 = 0x28
	int m_pitch;	// 44 = 0x2c
	int m_family;	// 48 = 0x30
	NSString *m_lfFaceName;	// 52 = 0x34
	NSString *m_elfFullName;	// 56 = 0x38
	NSString *m_elfStyle;	// 60 = 0x3c
	unsigned m_elfVersion;	// 64 = 0x40
	unsigned m_elfStyleSize;	// 68 = 0x44
	unsigned m_elfMatch;	// 72 = 0x48
	unsigned m_elfVendorId;	// 76 = 0x4c
	unsigned m_elfCulture;	// 80 = 0x50
}
+ (id)fontWithExtendedFeatures:(long)extendedFeatures :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x31cda7e9
+ (id)fontWithFeatures:(long)features :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x31cd5d49
+ (id)fontWithStockFont:(int)stockFont;	// 0x31c4ccd1
- (id)initWithAllFeatures:(long)allFeatures :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x31c4cf4d
- (id)initWithFeatures:(long)features :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x31c4cecd
- (id)initWithStockFont:(int)stockFont;	// 0x31c4cd0d
- (void)dealloc;	// 0x31c516dd
- (double)escapement;	// 0x31cdc1c1
- (id)faceName;	// 0x31cdc1b1
- (double)fontHeight;	// 0x31d58531
- (int)getCharset;	// 0x31d36a85
- (int)selectInto:(id)into;	// 0x31cd5de1
- (BOOL)strikeout;	// 0x31cdc201
- (id)stringWithBytes:(const void *)bytes length:(unsigned)length;	// 0x31d36861
- (CGRect)textExtent:(id)extent :(int)arg2 :(int *)arg3 :(int)arg4;	// 0x31de5549
- (BOOL)underline;	// 0x31cdc215
@end
