/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import <NSObject.h> // Unknown library
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, MRSlideProvider, MRImage, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRSlideProvider *mSlideProvider;	// 8 = 0x8
	MRImage *mInputImage;	// 12 = 0xc
	MRImage *mOutputImage;	// 16 = 0x10
	NSString *mFrameID;	// 20 = 0x14
	NSDictionary *mAttributes;	// 24 = 0x18
	NSDictionary *mFlattenedAttributes;	// 28 = 0x1c
	CGSize mPixelSize;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x364d7ae5; S=0x364d7681; @synthesize=mAttributes
@property(readonly, assign) NSString *frameID;	// G=0x364d7ad1; @synthesize=mFrameID
@property(retain, nonatomic) MRImage *inputImage;	// G=0x364d7ac1; S=0x364d7619; @synthesize=mInputImage
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x364d78e1; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x364d7949; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x364d7861; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x364d78a1; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x364d7af5; S=0x364d77ad; @synthesize=mPixelSize
+ (id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;	// 0x364d730d
- (id)initWithFrameID:(id)frameID;	// 0x364d735d
// declared property getter: - (id)attributes;	// 0x364d7ae5
- (void)cancelLoading;	// 0x364d785d
- (void)cleanup;	// 0x364d74b9
- (void)dealloc;	// 0x364d7439
- (void)finalize;	// 0x364d7479
// declared property getter: - (id)frameID;	// 0x364d7ad1
// declared property getter: - (id)inputImage;	// 0x364d7ac1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x364d78e1
// declared property getter: - (BOOL)isInfinite;	// 0x364d7949
- (BOOL)isLoadedForTime:(double)time;	// 0x364d7805
// declared property getter: - (BOOL)isNative3D;	// 0x364d7861
// declared property getter: - (BOOL)isOpaque;	// 0x364d78a1
- (BOOL)isRetainedBySlideProvider;	// 0x364d7601
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x364d7809
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d7959
// declared property getter: - (CGSize)pixelSize;	// 0x364d7af5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d794d
- (void)releaseBySlideProvider:(id)provider;	// 0x364d7555
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d7951
- (void)retainBySlideProvider:(id)provider;	// 0x364d752d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d7955
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x364d7681
// declared property setter: - (void)setInputImage:(id)image;	// 0x364d7619
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x364d77ad
- (void)unload;	// 0x364d780d
@end
