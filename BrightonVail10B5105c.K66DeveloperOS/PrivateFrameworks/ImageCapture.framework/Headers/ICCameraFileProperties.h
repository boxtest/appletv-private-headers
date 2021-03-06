/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject {
	long long _fileSize;	// 4 = 0x4
	BOOL _hasThumbnail;	// 12 = 0xc
	BOOL _hasMetadata;	// 13 = 0xd
	BOOL _raw;	// 14 = 0xe
	int _fetchingThumbnailLock;	// 16 = 0x10
	BOOL _fetchingThumbnail;	// 20 = 0x14
	int _fetchingMetadataLock;	// 24 = 0x18
	BOOL _fetchingMetadata;	// 28 = 0x1c
	CGImageRef _originalThumbnail;	// 32 = 0x20
	CGImageRef _thumbnail;	// 36 = 0x24
	NSMutableDictionary *_metadata;	// 40 = 0x28
	NSMutableDictionary *_metadata_hidden;	// 44 = 0x2c
	unsigned _orientation;	// 48 = 0x30
	BOOL _hasOverriddenOrientation;	// 52 = 0x34
}
@property(assign) BOOL fetchingMetadata;	// G=0x35ad7a09; S=0x35ad7a3d; 
@property(assign) BOOL fetchingThumbnail;	// G=0x35ad79a1; S=0x35ad79d5; 
@property(assign) long long fileSize;	// G=0x35ad7a71; S=0x35ad7aa5; @synthesize=_fileSize
@property(assign) BOOL hasMetadata;	// G=0x35ad7b09; S=0x35ad7b21; @synthesize=_hasMetadata
@property(assign) BOOL hasOverriddenOrientation;	// G=0x35ad7c05; S=0x35ad7c1d; @synthesize=_hasOverriddenOrientation
@property(assign) BOOL hasThumbnail;	// G=0x35ad7ad9; S=0x35ad7af1; @synthesize=_hasThumbnail
@property(retain) NSMutableDictionary *metadata;	// G=0x35ad7b69; S=0x35ad7b7d; @synthesize=_metadata
@property(retain) NSMutableDictionary *metadata_hidden;	// G=0x35ad7ba1; S=0x35ad7bb5; @synthesize=_metadata_hidden
@property(assign) unsigned orientation;	// G=0x35ad7bd9; S=0x35ad7bed; @synthesize=_orientation
@property(assign) CGImageRef originalThumbnail;	// G=0x35ad7965; S=0x35ad7975; @dynamic
@property(assign, getter=isRaw) BOOL raw;	// G=0x35ad7b39; S=0x35ad7b51; @synthesize=_raw
@property(assign) CGImageRef thumbnail;	// G=0x35ad7929; S=0x35ad7939; @dynamic
- (void)dealloc;	// 0x35ad7829
// declared property getter: - (BOOL)fetchingMetadata;	// 0x35ad7a09
// declared property getter: - (BOOL)fetchingThumbnail;	// 0x35ad79a1
// declared property getter: - (long long)fileSize;	// 0x35ad7a71
- (void)finalize;	// 0x35ad78a9
// declared property getter: - (BOOL)hasMetadata;	// 0x35ad7b09
// declared property getter: - (BOOL)hasOverriddenOrientation;	// 0x35ad7c05
// declared property getter: - (BOOL)hasThumbnail;	// 0x35ad7ad9
// declared property getter: - (BOOL)isRaw;	// 0x35ad7b39
// declared property getter: - (id)metadata;	// 0x35ad7b69
// declared property getter: - (id)metadata_hidden;	// 0x35ad7ba1
// declared property getter: - (unsigned)orientation;	// 0x35ad7bd9
// declared property getter: - (CGImageRef)originalThumbnail;	// 0x35ad7965
// declared property setter: - (void)setFetchingMetadata:(BOOL)metadata;	// 0x35ad7a3d
// declared property setter: - (void)setFetchingThumbnail:(BOOL)thumbnail;	// 0x35ad79d5
// declared property setter: - (void)setFileSize:(long long)size;	// 0x35ad7aa5
// declared property setter: - (void)setHasMetadata:(BOOL)metadata;	// 0x35ad7b21
// declared property setter: - (void)setHasOverriddenOrientation:(BOOL)orientation;	// 0x35ad7c1d
// declared property setter: - (void)setHasThumbnail:(BOOL)thumbnail;	// 0x35ad7af1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x35ad7b7d
// declared property setter: - (void)setMetadata_hidden:(id)hidden;	// 0x35ad7bb5
// declared property setter: - (void)setOrientation:(unsigned)orientation;	// 0x35ad7bed
// declared property setter: - (void)setOriginalThumbnail:(CGImageRef)thumbnail;	// 0x35ad7975
// declared property setter: - (void)setRaw:(BOOL)raw;	// 0x35ad7b51
// declared property setter: - (void)setThumbnail:(CGImageRef)thumbnail;	// 0x35ad7939
// declared property getter: - (CGImageRef)thumbnail;	// 0x35ad7929
@end

