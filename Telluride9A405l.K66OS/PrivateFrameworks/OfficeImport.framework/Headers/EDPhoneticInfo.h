/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mFontIndex;	// 8 = 0x8
	NSString *mString;	// 12 = 0xc
	int mType;	// 16 = 0x10
	int mAlign;	// 20 = 0x14
	EDCollection *mRuns;	// 24 = 0x18
	bool mDoNotModify;	// 28 = 0x1c
}
@property(assign) int align;	// G=0x30e32d49; S=0x30d5fde9; converted property
@property(retain) id font;	// G=0x30e32dd5; S=0x30e32d79; converted property
@property(assign) unsigned fontIndex;	// G=0x30e32d69; S=0x30d5fe09; converted property
@property(retain) id string;	// G=0x30e32d59; S=0x30d5fd95; converted property
@property(assign) int type;	// G=0x30e32d39; S=0x30d5fd75; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x30d5fcbd
- (id)initWithResources:(id)resources;	// 0x30d5fd09
// converted property getter: - (int)align;	// 0x30e32d49
- (void)dealloc;	// 0x30d62e85
// converted property getter: - (id)font;	// 0x30e32dd5
// converted property getter: - (unsigned)fontIndex;	// 0x30e32d69
- (unsigned)hash;	// 0x30e32e1d
- (BOOL)isEqual:(id)equal;	// 0x30e32e79
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x30e32ed5
- (id)runs;	// 0x30d5ff3d
// converted property setter: - (void)setAlign:(int)align;	// 0x30d5fde9
- (void)setDoNotModify:(bool)modify;	// 0x30d5fe9d
// converted property setter: - (void)setFont:(id)font;	// 0x30e32d79
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x30d5fe09
// converted property setter: - (void)setString:(id)string;	// 0x30d5fd95
// converted property setter: - (void)setType:(int)type;	// 0x30d5fd75
// converted property getter: - (id)string;	// 0x30e32d59
// converted property getter: - (int)type;	// 0x30e32d39
@end

