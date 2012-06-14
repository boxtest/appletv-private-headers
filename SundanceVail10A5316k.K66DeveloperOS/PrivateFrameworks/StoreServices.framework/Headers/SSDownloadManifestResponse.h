/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {
@private
	NSArray *_validDownloads;	// 4 = 0x4
}
@property(copy) NSArray *validDownloads;	// G=0x34e3ef79; S=0x34e3ef89; 
- (id)initWithCoder:(id)coder;	// 0x34e3efcd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e3f295
- (id)copyXPCEncoding;	// 0x34e3f195
- (void)dealloc;	// 0x34e3ef2d
- (void)encodeWithCoder:(id)coder;	// 0x34e3f0cd
// declared property setter: - (void)setValidDownloads:(id)downloads;	// 0x34e3ef89
// declared property getter: - (id)validDownloads;	// 0x34e3ef79
@end
