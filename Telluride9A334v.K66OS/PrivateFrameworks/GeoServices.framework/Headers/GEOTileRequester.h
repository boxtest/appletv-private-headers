/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSThread, GEOTileKeyList, NSString;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : NSObject {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	id<GEOTileRequesterDelegate> _delegate;	// 8 = 0x8
	id _context;	// 12 = 0xc
	NSThread *_thread;	// 16 = 0x10
	NSString *_bundleIdentifier;	// 20 = 0x14
	NSString *_bundleVersion;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x32c6aed1; S=0x32c6aee1; @synthesize=_bundleIdentifier
@property(retain, nonatomic) NSString *bundleVersion;	// G=0x32c6af05; S=0x32c6af15; @synthesize=_bundleVersion
@property(retain, nonatomic) id context;	// G=0x32c6ae9d; S=0x32c6aead; @synthesize=_context
@property(retain, nonatomic) id<GEOTileRequesterDelegate> delegate;	// G=0x32c6ae25; S=0x32c6ae35; @synthesize=_delegate
@property(readonly, assign, nonatomic) GEOTileKeyList *keyList;	// G=0x32c6ae59; @synthesize=_keyList
@property(retain, nonatomic) NSThread *thread;	// G=0x32c6ae69; S=0x32c6ae79; @synthesize=_thread
+ (id)hostname;	// 0x32c6ad0d
+ (unsigned char)tileProviderIdentifier;	// 0x32c6ad09
- (id)initWithKeyList:(id)keyList;	// 0x32c6ad19
// declared property getter: - (id)bundleIdentifier;	// 0x32c6aed1
// declared property getter: - (id)bundleVersion;	// 0x32c6af05
- (void)cancel;	// 0x32c6ad71
// declared property getter: - (id)context;	// 0x32c6ae9d
- (void)dealloc;	// 0x32c6ad79
// declared property getter: - (id)delegate;	// 0x32c6ae25
// declared property getter: - (id)keyList;	// 0x32c6ae59
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32c6aee1
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x32c6af15
// declared property setter: - (void)setContext:(id)context;	// 0x32c6aead
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c6ae35
// declared property setter: - (void)setThread:(id)thread;	// 0x32c6ae79
- (void)start;	// 0x32c6ad6d
// declared property getter: - (id)thread;	// 0x32c6ae69
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x32c6ad75
@end

