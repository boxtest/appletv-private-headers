/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSOperation.h> // Unknown library

@class MPImageCache, MPImageModifier, UIColor, UIImage;
@protocol NSObject, MPImageRequestDelegate, NSCopying;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	int _contentMode;	// 20 = 0x14
	BOOL _decodeOnFetch;	// 24 = 0x18
	id<MPImageRequestDelegate> _delegate;	// 28 = 0x1c
	UIColor *_fillColor;	// 32 = 0x20
	CGSize _finalSize;	// 36 = 0x24
	MPImageModifier *_modifier;	// 44 = 0x2c
	id<NSObject, NSCopying> _uniqueKey;	// 48 = 0x30
	long long _tag;	// 52 = 0x34
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x31d62089; S=0x31d62099; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x31d6127d; 
@property(copy, nonatomic) id completionHandler;	// G=0x31d620a9; S=0x31d620bd; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x31d62159; S=0x31d62169; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x31d62179; S=0x31d62189; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x31d620cd; S=0x31d620dd; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x31d620ed; S=0x31d620fd; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x31d6210d; S=0x31d62125; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x31d62139; S=0x31d62149; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x31d61281; 
@property(assign, nonatomic) long long tag;	// G=0x31d62199; S=0x31d621b1; @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// G=0x31d621c5; S=0x31d621d5; @synthesize=_uniqueKey
- (id)init;	// 0x31d60e49
- (BOOL)_canUseInputImageAsFinalOutput:(id)output;	// 0x31d60fa1
- (void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x31d614a1
- (id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;	// 0x31d618b1
- (void)_sendErrorToDelegate:(id)delegate;	// 0x31d61b71
- (void)_sendImageToDelegate:(id)delegate;	// 0x31d61de1
// declared property getter: - (id)cache;	// 0x31d62089
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x31d6127d
- (void)cancel;	// 0x31d61325
// declared property getter: - (id)completionHandler;	// 0x31d620a9
// declared property getter: - (int)contentMode;	// 0x31d62159
- (id)copyImageFromImage:(id)image;	// 0x31d611b9
- (id)copyRawImageReturningError:(id *)error;	// 0x31d61271
- (void)dealloc;	// 0x31d60f11
// declared property getter: - (BOOL)decodeOnFetch;	// 0x31d62179
// declared property getter: - (id)delegate;	// 0x31d620cd
- (id)description;	// 0x31d60ea1
// declared property getter: - (id)fillColor;	// 0x31d620ed
// declared property getter: - (CGSize)finalSize;	// 0x31d6210d
- (unsigned)hash;	// 0x31d61285
- (BOOL)isEqual:(id)equal;	// 0x31d612ad
- (void)main;	// 0x31d61369
// declared property getter: - (id)modifier;	// 0x31d62139
// declared property getter: - (id)placeholderImage;	// 0x31d61281
// declared property setter: - (void)setCache:(id)cache;	// 0x31d62099
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x31d620bd
// declared property setter: - (void)setContentMode:(int)mode;	// 0x31d62169
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x31d62189
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31d620dd
// declared property setter: - (void)setFillColor:(id)color;	// 0x31d620fd
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x31d62125
// declared property setter: - (void)setModifier:(id)modifier;	// 0x31d62149
// declared property setter: - (void)setTag:(long long)tag;	// 0x31d621b1
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x31d621d5
// declared property getter: - (long long)tag;	// 0x31d62199
// declared property getter: - (id)uniqueKey;	// 0x31d621c5
@end

