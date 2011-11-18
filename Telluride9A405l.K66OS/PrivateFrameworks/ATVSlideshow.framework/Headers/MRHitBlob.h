/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MRLayerEffect, NSString, MRLayer;

@interface MRHitBlob : NSObject {
	NSString *_innerPath;	// 4 = 0x4
	MRLayer *_outerLayer;	// 8 = 0x8
	MRLayerEffect *_effectLayer;	// 12 = 0xc
	NSString *_elementID;	// 16 = 0x10
	id _clientObject;	// 20 = 0x14
	id _clientMediaObject;	// 24 = 0x18
}
@property(readonly, assign) float aspectRatio;	// G=0x33619c41; 
@property(retain) id clientMediaObject;	// G=0x33619eb1; S=0x33619ec5; @synthesize=_clientMediaObject
@property(retain) id clientObject;	// G=0x33619e79; S=0x33619e8d; @synthesize=_clientObject
@property(retain) MRLayerEffect *effectLayer;	// G=0x33619dd1; S=0x33619de5; @synthesize=_effectLayer
@property(copy) NSString *elementID;	// G=0x33619e41; S=0x33619e55; @synthesize=_elementID
@property(copy) NSString *innerPath;	// G=0x33619e09; S=0x33619e1d; @synthesize=_innerPath
@property(readonly, assign) NSString *mediaType;	// G=0x33619cbd; 
@property(retain) MRLayer *outerLayer;	// G=0x33619d99; S=0x33619dad; @synthesize=_outerLayer
// declared property getter: - (float)aspectRatio;	// 0x33619c41
// declared property getter: - (id)clientMediaObject;	// 0x33619eb1
// declared property getter: - (id)clientObject;	// 0x33619e79
// declared property getter: - (id)effectLayer;	// 0x33619dd1
// declared property getter: - (id)elementID;	// 0x33619e41
// declared property getter: - (id)innerPath;	// 0x33619e09
- (BOOL)isEqualToHitBlob:(id)hitBlob;	// 0x33619d21
// declared property getter: - (id)mediaType;	// 0x33619cbd
// declared property getter: - (id)outerLayer;	// 0x33619d99
// declared property setter: - (void)setClientMediaObject:(id)object;	// 0x33619ec5
// declared property setter: - (void)setClientObject:(id)object;	// 0x33619e8d
// declared property setter: - (void)setEffectLayer:(id)layer;	// 0x33619de5
// declared property setter: - (void)setElementID:(id)anId;	// 0x33619e55
// declared property setter: - (void)setInnerPath:(id)path;	// 0x33619e1d
// declared property setter: - (void)setOuterLayer:(id)layer;	// 0x33619dad
@end

