/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLResponse.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
@private
	NSHTTPURLResponseInternal *_httpInternal;	// 8 = 0x8
}
+ (BOOL)isErrorStatusCode:(int)code;	// 0x30644169
+ (id)localizedStringForStatusCode:(int)statusCode;	// 0x306c2ca5
- (id)initWithCoder:(id)coder;	// 0x306c27fd
- (id)initWithURL:(id)url statusCode:(int)code HTTPVersion:(id)version headerFields:(id)fields;	// 0x306c2749
- (id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;	// 0x306c270d
- (id)_clientCertificateChain;	// 0x306c2fc9
- (id)_clientCertificateState;	// 0x306c3035
- (id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;	// 0x30614a41
- (id)_peerCertificateChain;	// 0x306c2f5d
- (SecTrust *)_peerTrust;	// 0x306c3111
- (void)_setPeerTrust:(SecTrust *)trust;	// 0x306c30b5
- (id)allHeaderFields;	// 0x30615735
- (void)dealloc;	// 0x30614ba5
- (void)encodeWithCoder:(id)coder;	// 0x306c2c39
- (int)statusCode;	// 0x30614b71
@end
