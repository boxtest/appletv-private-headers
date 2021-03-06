/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawableProperties;
@protocol OADDrawableContainer, OADClient;

@interface OADDrawable : NSObject {
	BOOL mHidden;	// 4 = 0x4
	long mId;	// 8 = 0x8
	OADDrawableProperties *mDrawableProperties;	// 12 = 0xc
	id<OADClient> mClientData;	// 16 = 0x10
	OADDrawable<OADDrawableContainer> *mParent;	// 20 = 0x14
}
@property(retain) id clientData;	// G=0x34a474e9; S=0x34a46995; converted property
@property(retain) id drawableProperties;	// G=0x349fda71; S=0x34a42ef9; converted property
@property(assign) BOOL hidden;	// G=0x34a549b9; S=0x34a43f71; converted property
@property(assign) long id;	// G=0x34acef51; S=0x349fdce1; converted property
@property(retain) id parent;	// G=0x34a5524d; S=0x34a60a01; converted property
- (id)initWithPropertiesClass:(Class)propertiesClass;	// 0x349fd669
// converted property getter: - (id)clientData;	// 0x34a474e9
- (id)createOrientedBoundsWithBounds:(CGRect)bounds;	// 0x34c26151
- (id)createWordClientDataWithTextType:(int)textType;	// 0x34c8302d
- (void)dealloc;	// 0x34a64c59
// converted property getter: - (id)drawableProperties;	// 0x349fda71
- (id)ensureClientDataOfClass:(Class)aClass;	// 0x34b15329
// converted property getter: - (BOOL)hidden;	// 0x34a549b9
// converted property getter: - (long)id;	// 0x34acef51
// converted property getter: - (id)parent;	// 0x34a5524d
- (void)removeUnnecessaryOverrides;	// 0x34a47a31
// converted property setter: - (void)setClientData:(id)data;	// 0x34a46995
// converted property setter: - (void)setDrawableProperties:(id)properties;	// 0x34a42ef9
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x34a43f71
// converted property setter: - (void)setId:(long)anId;	// 0x349fdce1
// converted property setter: - (void)setParent:(id)parent;	// 0x34a60a01
- (void)setParentTextListStyle:(id)style;	// 0x34c2614d
@end

