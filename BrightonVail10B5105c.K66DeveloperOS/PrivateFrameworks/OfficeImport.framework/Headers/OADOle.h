/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface OADOle : NSObject {
	BOOL mIconic;	// 4 = 0x4
	NSString *mCLSID;	// 8 = 0x8
	NSString *mAnsiUserType;	// 12 = 0xc
	NSString *mAnsiClipboardFormatName;	// 16 = 0x10
	unsigned long mWinClipboardFormat;	// 20 = 0x14
	NSString *mMacClipboardFormat;	// 24 = 0x18
	NSString *mAnsiProgID;	// 28 = 0x1c
	NSString *mUnicodeUserType;	// 32 = 0x20
	NSString *mUnicodeClipboardFormatName;	// 36 = 0x24
	NSString *mUnicodeProgID;	// 40 = 0x28
	id mObject;	// 44 = 0x2c
}
@property(retain) id CLSID;	// G=0x37a022e5; S=0x37a02269; converted property
@property(retain) id ansiClipboardFormatName;	// G=0x37af2d79; S=0x37a02475; converted property
@property(retain) id ansiProgID;	// G=0x37af2df5; S=0x37a024b1; converted property
@property(retain) id ansiUserType;	// G=0x37af2d69; S=0x37a02439; converted property
@property(assign) BOOL iconic;	// G=0x37af2d49; S=0x37af2d59; converted property
@property(retain) id macClipboardFormat;	// G=0x37af2da9; S=0x37af2db9; converted property
@property(retain) id object;	// G=0x37af2e35; S=0x37a02691; converted property
@property(retain) id unicodeClipboardFormatName;	// G=0x37af2e15; S=0x37a025f5; converted property
@property(retain) id unicodeProgID;	// G=0x37af2e25; S=0x37a02631; converted property
@property(retain) id unicodeUserType;	// G=0x37af2e05; S=0x37a025b9; converted property
@property(assign) unsigned long winClipboardFormat;	// G=0x37af2d89; S=0x37af2d99; converted property
+ (BOOL)isCLSIDSupported:(id)supported;	// 0x37af2e45
+ (BOOL)isProgIDSupported:(id)supported;	// 0x379fb7b9
- (id)init;	// 0x379ee2a1
// converted property getter: - (id)CLSID;	// 0x37a022e5
// converted property getter: - (id)ansiClipboardFormatName;	// 0x37af2d79
// converted property getter: - (id)ansiProgID;	// 0x37af2df5
// converted property getter: - (id)ansiUserType;	// 0x37af2d69
- (void)dealloc;	// 0x379ee76d
// converted property getter: - (BOOL)iconic;	// 0x37af2d49
// converted property getter: - (id)macClipboardFormat;	// 0x37af2da9
// converted property getter: - (id)object;	// 0x37af2e35
// converted property setter: - (void)setAnsiClipboardFormatName:(id)name;	// 0x37a02475
// converted property setter: - (void)setAnsiProgID:(id)anId;	// 0x37a024b1
// converted property setter: - (void)setAnsiUserType:(id)type;	// 0x37a02439
// converted property setter: - (void)setCLSID:(id)clsid;	// 0x37a02269
// converted property setter: - (void)setIconic:(BOOL)iconic;	// 0x37af2d59
// converted property setter: - (void)setMacClipboardFormat:(id)format;	// 0x37af2db9
// converted property setter: - (void)setObject:(id)object;	// 0x37a02691
// converted property setter: - (void)setUnicodeClipboardFormatName:(id)name;	// 0x37a025f5
// converted property setter: - (void)setUnicodeProgID:(id)anId;	// 0x37a02631
// converted property setter: - (void)setUnicodeUserType:(id)type;	// 0x37a025b9
// converted property setter: - (void)setWinClipboardFormat:(unsigned long)format;	// 0x37af2d99
// converted property getter: - (id)unicodeClipboardFormatName;	// 0x37af2e15
// converted property getter: - (id)unicodeProgID;	// 0x37af2e25
// converted property getter: - (id)unicodeUserType;	// 0x37af2e05
// converted property getter: - (unsigned long)winClipboardFormat;	// 0x37af2d89
@end

