/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
@private
	WebArchivePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x339c584d
- (id)initWithCoder:(id)coder;	// 0x339c61d5
- (id)initWithData:(id)data;	// 0x339c63c9
- (id)initWithMainResource:(id)mainResource subresources:(id)subresources subframeArchives:(id)archives;	// 0x339c660d
- (LegacyWebArchive *)_coreLegacyWebArchive;	// 0x339c6e1d
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreLegacyWebArchive;	// 0x339c6c9d
- (id)copyWithZone:(NSZone *)zone;	// 0x339c60e1
- (id)data;	// 0x339c58b1
- (void)dealloc;	// 0x339c60f1
- (void)encodeWithCoder:(id)coder;	// 0x339c613d
- (id)mainResource;	// 0x339c5f11
- (id)subframeArchives;	// 0x339c59b9
- (id)subresources;	// 0x339c5c4d
@end
