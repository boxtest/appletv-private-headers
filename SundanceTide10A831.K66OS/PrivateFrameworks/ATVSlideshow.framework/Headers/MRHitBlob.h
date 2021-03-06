/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRLayer, NSString, MRLayerEffect;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : NSObject {
	MRLayer *_outerLayer;	// 4 = 0x4
	MRLayerEffect *_effectLayer;	// 8 = 0x8
	NSString *_innerPath;	// 12 = 0xc
	NSString *_elementID;	// 16 = 0x10
	id _clientObject;	// 20 = 0x14
	id<MRSlidePositionSupport> _proxyForSlide;	// 24 = 0x18
	unsigned char _currentLayoutIndex;	// 28 = 0x1c
}
@property(readonly, assign) float aspectRatio;	// G=0x33ac8bc1; 
@property(retain) id clientObject;	// G=0x33ac8dcd; S=0x33ac8de1; @synthesize=_clientObject
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x33ac8e1d; S=0x33ac8e2d; @synthesize=_currentLayoutIndex
@property(retain) MRLayerEffect *effectLayer;	// G=0x33ac8d61; S=0x33ac8d75; @synthesize=_effectLayer
@property(copy) NSString *elementID;	// G=0x33ac8da9; S=0x33ac8dbd; @synthesize=_elementID
@property(copy) NSString *innerPath;	// G=0x33ac8d85; S=0x33ac8d99; @synthesize=_innerPath
@property(readonly, assign) CGSize innerResolution;	// G=0x33ac8c31; 
@property(readonly, assign) NSString *mediaType;	// G=0x33ac8c61; 
@property(retain) MRLayer *outerLayer;	// G=0x33ac8d3d; S=0x33ac8d51; @synthesize=_outerLayer
@property(assign) id<MRSlidePositionSupport> proxyForSlide;	// G=0x33ac8df1; S=0x33ac8e05; @synthesize=_proxyForSlide
// declared property getter: - (float)aspectRatio;	// 0x33ac8bc1
// declared property getter: - (id)clientObject;	// 0x33ac8dcd
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x33ac8e1d
// declared property getter: - (id)effectLayer;	// 0x33ac8d61
// declared property getter: - (id)elementID;	// 0x33ac8da9
// declared property getter: - (id)innerPath;	// 0x33ac8d85
// declared property getter: - (CGSize)innerResolution;	// 0x33ac8c31
- (BOOL)isEqualToHitBlob:(id)hitBlob;	// 0x33ac8cc5
// declared property getter: - (id)mediaType;	// 0x33ac8c61
// declared property getter: - (id)outerLayer;	// 0x33ac8d3d
// declared property getter: - (id)proxyForSlide;	// 0x33ac8df1
// declared property setter: - (void)setClientObject:(id)object;	// 0x33ac8de1
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x33ac8e2d
// declared property setter: - (void)setEffectLayer:(id)layer;	// 0x33ac8d75
// declared property setter: - (void)setElementID:(id)anId;	// 0x33ac8dbd
// declared property setter: - (void)setInnerPath:(id)path;	// 0x33ac8d99
// declared property setter: - (void)setOuterLayer:(id)layer;	// 0x33ac8d51
// declared property setter: - (void)setProxyForSlide:(id)slide;	// 0x33ac8e05
@end

