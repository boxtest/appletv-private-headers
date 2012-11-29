/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXClient.h"
#import "OfficeImport-Structs.h"

@class PXPresentationState;

@interface PXOfficeArtClient : OAXClient {
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x379de525
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x379de36d
- (id)initWithState:(id)state;	// 0x379d9e55
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x37a0b351
- (id)presentationState;	// 0x37b2d255
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x37a02749
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x379e15d9
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x379de159
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x379de6cd
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x37a0172d
@end
