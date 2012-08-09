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
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x33a8dbbd
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x33a8da05
- (id)initWithState:(id)state;	// 0x33a894ed
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x33aba9e9
- (id)presentationState;	// 0x33bdc265
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x33ab1de1
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x33a90c71
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x33a8d7f1
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x33a8dd65
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x33ab0dc5
@end
