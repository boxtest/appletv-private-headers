/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties3DParent.h"
#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADScene3D, OADFill, NSArray, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
}
@property(retain) id effects;	// G=0x346173f1; S=0x34441cdd; converted property
@property(retain) id fill;	// G=0x3452f1cd; S=0x34441c9d; converted property
@property(retain) id scene3D;	// G=0x34617389; S=0x34441d1d; converted property
@property(retain) id shape3D;	// G=0x34617321; S=0x34441d5d; converted property
+ (id)defaultProperties;	// 0x34441b25
- (id)initWithDefaults;	// 0x34441b6d
- (void)dealloc;	// 0x344444c9
// converted property getter: - (id)effects;	// 0x346173f1
// converted property getter: - (id)fill;	// 0x3452f1cd
- (BOOL)hasEffects;	// 0x346173b9
- (BOOL)hasFill;	// 0x3452f1fd
- (BOOL)hasScene3D;	// 0x34617351
- (BOOL)hasShape3D;	// 0x346172e9
// converted property getter: - (id)scene3D;	// 0x34617389
// converted property setter: - (void)setEffects:(id)effects;	// 0x34441cdd
// converted property setter: - (void)setFill:(id)fill;	// 0x34441c9d
// converted property setter: - (void)setScene3D:(id)d;	// 0x34441d1d
// converted property setter: - (void)setShape3D:(id)d;	// 0x34441d5d
// converted property getter: - (id)shape3D;	// 0x34617321
@end
