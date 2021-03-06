/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class MRLayer, MRLayerEffect, NSString;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : NSObject {
	unsigned char _currentLayoutIndex;	// 4 = 0x4
	MRLayer *_outerLayer;	// 8 = 0x8
	MRLayerEffect *_effectLayer;	// 12 = 0xc
	NSString *_innerPath;	// 16 = 0x10
	NSString *_elementID;	// 20 = 0x14
	id _clientObject;	// 24 = 0x18
	id<MRSlidePositionSupport> _proxyForSlide;	// 28 = 0x1c
}
@property(readonly, assign) float aspectRatio;	// G=0x2fd25c85; 
@property(retain) id clientObject;	// G=0x2fd25e91; S=0x2fd25ea5; @synthesize=_clientObject
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x2fd25ee1; S=0x2fd25ef1; @synthesize=_currentLayoutIndex
@property(retain) MRLayerEffect *effectLayer;	// G=0x2fd25e25; S=0x2fd25e39; @synthesize=_effectLayer
@property(copy) NSString *elementID;	// G=0x2fd25e6d; S=0x2fd25e81; @synthesize=_elementID
@property(copy) NSString *innerPath;	// G=0x2fd25e49; S=0x2fd25e5d; @synthesize=_innerPath
@property(readonly, assign) CGSize innerResolution;	// G=0x2fd25cf5; 
@property(readonly, assign) NSString *mediaType;	// G=0x2fd25d25; 
@property(retain) MRLayer *outerLayer;	// G=0x2fd25e01; S=0x2fd25e15; @synthesize=_outerLayer
@property(assign) id<MRSlidePositionSupport> proxyForSlide;	// G=0x2fd25eb5; S=0x2fd25ec9; @synthesize=_proxyForSlide
// declared property getter: - (float)aspectRatio;	// 0x2fd25c85
// declared property getter: - (id)clientObject;	// 0x2fd25e91
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x2fd25ee1
// declared property getter: - (id)effectLayer;	// 0x2fd25e25
// declared property getter: - (id)elementID;	// 0x2fd25e6d
// declared property getter: - (id)innerPath;	// 0x2fd25e49
// declared property getter: - (CGSize)innerResolution;	// 0x2fd25cf5
- (BOOL)isEqualToHitBlob:(id)hitBlob;	// 0x2fd25d89
// declared property getter: - (id)mediaType;	// 0x2fd25d25
// declared property getter: - (id)outerLayer;	// 0x2fd25e01
// declared property getter: - (id)proxyForSlide;	// 0x2fd25eb5
// declared property setter: - (void)setClientObject:(id)object;	// 0x2fd25ea5
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x2fd25ef1
// declared property setter: - (void)setEffectLayer:(id)layer;	// 0x2fd25e39
// declared property setter: - (void)setElementID:(id)anId;	// 0x2fd25e81
// declared property setter: - (void)setInnerPath:(id)path;	// 0x2fd25e5d
// declared property setter: - (void)setOuterLayer:(id)layer;	// 0x2fd25e15
// declared property setter: - (void)setProxyForSlide:(id)slide;	// 0x2fd25ec9
@end

