/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceInfo : NSObject {
	NSString *_name;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
	NSString *_onDiskPath;	// 16 = 0x10
}
@property(retain, nonatomic) NSData *data;	// G=0x33fc5cd5; S=0x33fc5ce5; @synthesize=_data
@property(copy, nonatomic) NSString *name;	// G=0x33fc5c91; S=0x33fc5ca5; @synthesize=_name
@property(copy, nonatomic) NSString *onDiskPath;	// G=0x33fc5cf5; S=0x33fc5d09; @synthesize=_onDiskPath
@property(retain, nonatomic) NSURL *url;	// G=0x33fc5cb5; S=0x33fc5cc5; @synthesize=_url
// declared property getter: - (id)data;	// 0x33fc5cd5
- (void)dealloc;	// 0x33fc5c05
// declared property getter: - (id)name;	// 0x33fc5c91
// declared property getter: - (id)onDiskPath;	// 0x33fc5cf5
// declared property setter: - (void)setData:(id)data;	// 0x33fc5ce5
// declared property setter: - (void)setName:(id)name;	// 0x33fc5ca5
// declared property setter: - (void)setOnDiskPath:(id)path;	// 0x33fc5d09
// declared property setter: - (void)setUrl:(id)url;	// 0x33fc5cc5
// declared property getter: - (id)url;	// 0x33fc5cb5
@end
