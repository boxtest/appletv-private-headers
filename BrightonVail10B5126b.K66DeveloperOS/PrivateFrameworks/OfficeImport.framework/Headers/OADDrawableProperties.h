/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADOrientedBounds, OADHyperlink;

@interface OADDrawableProperties : OADProperties {
	OADOrientedBounds *mOrientedBounds;	// 12 = 0xc
	OADHyperlink *mClickHyperlink;	// 16 = 0x10
	OADHyperlink *mHoverHyperlink;	// 20 = 0x14
	unsigned mHasAspectRatioLocked : 1;	// 24 = 0x18
	unsigned mAspectRatioLocked : 1;	// 24 = 0x18
	unsigned mHasWrdInline : 1;	// 24 = 0x18
	unsigned mWrdInline : 1;	// 24 = 0x18
}
@property(assign, getter=isAspectRatioLocked) BOOL aspectRatioLocked;	// G=0x3486b875; S=0x34820af1; converted property
@property(retain) id clickHyperlink;	// G=0x348fd14d; S=0x3488393d; converted property
@property(retain) id hoverHyperlink;	// G=0x34a492ad; S=0x349bf9ad; converted property
@property(retain) id orientedBounds;	// G=0x34866759; S=0x34817da1; converted property
@property(assign, getter=isWrdInline) BOOL wrdInline;	// G=0x349c4b91; S=0x349c4b59; converted property
- (id)initWithDefaults;	// 0x34817bfd
// converted property getter: - (id)clickHyperlink;	// 0x348fd14d
- (void)dealloc;	// 0x3481c751
- (BOOL)hasAspectRatioLocked;	// 0x3486b861
- (BOOL)hasClickHyperlink;	// 0x3486ba2d
- (BOOL)hasHoverHyperlink;	// 0x3486ba61
- (BOOL)hasOrientedBounds;	// 0x34866725
- (BOOL)hasWrdInline;	// 0x3486ba95
- (unsigned)hash;	// 0x34a492bd
// converted property getter: - (id)hoverHyperlink;	// 0x34a492ad
// converted property getter: - (BOOL)isAspectRatioLocked;	// 0x3486b875
- (BOOL)isEqual:(id)equal;	// 0x34a49369
// converted property getter: - (BOOL)isWrdInline;	// 0x349c4b91
// converted property getter: - (id)orientedBounds;	// 0x34866759
- (void)removeUnnecessaryOverrides;	// 0x3486b565
// converted property setter: - (void)setAspectRatioLocked:(BOOL)locked;	// 0x34820af1
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x3488393d
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x349bf9ad
// converted property setter: - (void)setOrientedBounds:(id)bounds;	// 0x34817da1
// converted property setter: - (void)setWrdInline:(BOOL)anInline;	// 0x349c4b59
@end
