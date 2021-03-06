/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject {
@private
	BOOL mHidden;	// 4 = 0x4
	unsigned mId;	// 8 = 0x8
	OADDrawableProperties *mDrawableProperties;	// 12 = 0xc
	id<OADClient> mClientData;	// 16 = 0x10
	OADDrawable<OADDrawableContainer> *mParent;	// 20 = 0x14
}
@property(retain) id clientData;	// G=0x3281f1dd; S=0x3289fee5; converted property
@property(retain) id drawableProperties;	// G=0x3281f269; S=0x3289a54d; converted property
@property(assign) BOOL hidden;	// G=0x328a7ea9; S=0x328a0575; converted property
@property(assign) unsigned long id;	// G=0x329564e5; S=0x32827d2d; converted property
@property(retain) id parent;	// G=0x3281f3c5; S=0x328eae41; converted property
- (id)initWithPropertiesClass:(Class)propertiesClass;	// 0x32827275
// converted property getter: - (id)clientData;	// 0x3281f1dd
- (id)createOrientedBoundsWithBounds:(CGRect)bounds;	// 0x32abd44d
- (id)createWordClientDataWithTextType:(int)textType;	// 0x32aa3b9d
- (void)dealloc;	// 0x328a9729
// converted property getter: - (id)drawableProperties;	// 0x3281f269
- (id)ensureClientDataOfClass:(Class)aClass;	// 0x329cc091
// converted property getter: - (BOOL)hidden;	// 0x328a7ea9
// converted property getter: - (unsigned long)id;	// 0x329564e5
// converted property getter: - (id)parent;	// 0x3281f3c5
- (void)removeUnnecessaryOverrides;	// 0x328a53e9
// converted property setter: - (void)setClientData:(id)data;	// 0x3289fee5
// converted property setter: - (void)setDrawableProperties:(id)properties;	// 0x3289a54d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x328a0575
// converted property setter: - (void)setId:(unsigned long)anId;	// 0x32827d2d
// converted property setter: - (void)setParent:(id)parent;	// 0x328eae41
- (void)setParentTextListStyle:(id)style;	// 0x32abd449
@end

