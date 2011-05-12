/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableDictionary;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OABReaderState : NSObject {
@private
	Class mClient;	// 4 = 0x4
	NSMutableDictionary *mShapeIdMap;	// 8 = 0x8
	NSMutableDictionary *mEshContentIdMap;	// 12 = 0xc
	id<OADColorPalette> mColorPalette;	// 16 = 0x10
	NSMutableDictionary *mBlipIdMap;	// 20 = 0x14
}
@property(retain) id colorPalette;	// G=0x3443bc39; S=0x344b9821; converted property
- (id)init;	// 0x345f0191
- (id)initWithClient:(Class)client;	// 0x3447e691
- (Class)client;	// 0x3443ef49
// converted property getter: - (id)colorPalette;	// 0x3443bc39
- (void)dealloc;	// 0x343c7545
- (id)drawableForBlipId:(int)blipId;	// 0x345f0151
- (id)drawableForShapeId:(int)shapeId;	// 0x3443b4c1
- (EshContent *)eshContentForId:(int)anId;	// 0x3443b511
// converted property setter: - (void)setColorPalette:(id)palette;	// 0x344b9821
- (void)setDrawable:(id)drawable forBlipId:(int)blipId;	// 0x3444e83d
- (void)setDrawable:(id)drawable forShapeId:(int)shapeId;	// 0x3443ba05
- (void)setEshContent:(EshContent *)content forId:(int)anId;	// 0x3443ba49
@end
