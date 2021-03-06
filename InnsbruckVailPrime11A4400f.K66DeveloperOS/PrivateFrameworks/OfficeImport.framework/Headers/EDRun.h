/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "EDKeyedObject.h"

@class EDResources;

@interface EDRun : NSObject <EDKeyedObject> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mCharIndex;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
}
@property(assign) unsigned charIndex;	// G=0x317b7521; S=0x318d67bd; converted property
@property(retain) id font;	// G=0x317b7531; S=0x317f1071; converted property
@property(assign) unsigned fontIndex;	// G=0x3184ca2d; S=0x318d67cd; converted property
+ (id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x317f0fd5
+ (id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x317b3341
+ (id)runWithResources:(id)resources;	// 0x318d6771
- (id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;	// 0x317f102d
- (id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;	// 0x317b3399
- (id)initWithResources:(id)resources;	// 0x317b33d9
// converted property getter: - (unsigned)charIndex;	// 0x317b7521
// converted property getter: - (id)font;	// 0x317b7531
// converted property getter: - (unsigned)fontIndex;	// 0x3184ca2d
- (BOOL)isEqual:(id)equal;	// 0x31858bc1
- (BOOL)isEqualToRun:(id)run;	// 0x31858c1d
- (int)key;	// 0x317b3435
// converted property setter: - (void)setCharIndex:(unsigned)index;	// 0x318d67bd
// converted property setter: - (void)setFont:(id)font;	// 0x317f1071
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x318d67cd
@end

