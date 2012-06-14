/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSData, NSArray, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <SSCoding, NSCoding, NSCopying, NSMutableCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	NSDictionary *_requestParameters;	// 48 = 0x30
	BOOL _shouldProcessProtocol;	// 52 = 0x34
	double _timeoutInterval;	// 56 = 0x38
	NSString *_urlBagKey;	// 64 = 0x40
	int _urlBagType;	// 68 = 0x44
	id _urlBagURLBlock;	// 72 = 0x48
	NSArray *_urls;	// 76 = 0x4c
	NSArray *_userAgentComponents;	// 80 = 0x50
}
@property(readonly, assign) NSData *HTTPBody;	// G=0x30ec38ed; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x30ec4d3d; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x30ec3a89; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x30ec3c25; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x30ec3dc1; 
@property(readonly, assign) NSURL *URL;	// G=0x30ec43b5; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x30ec4219; 
@property(readonly, assign) int URLBagType;	// G=0x30ec4ed9; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x30ec4fa9; 
@property(readonly, assign) NSArray *URLs;	// G=0x30ec5159; 
@property(readonly, assign) int allowedRetryCount;	// G=0x30ec34c5; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x30ec3595; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x30ec49e9; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x30ec3665; 
@property(readonly, assign) long long expectedContentLength;	// G=0x30ec3801; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x30ec3eb1; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x30ec404d; 
@property(readonly, assign) double timeoutInterval;	// G=0x30ec4121; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x30ec4585; 
- (id)init;	// 0x30ec1dd1
- (id)initWithCoder:(id)coder;	// 0x30ec24a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30ec31c5
- (id)initWithURL:(id)url;	// 0x30ec1de5
- (id)initWithURLRequest:(id)urlrequest;	// 0x30ec1e45
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30ec3489
// declared property getter: - (id)HTTPBody;	// 0x30ec38ed
// declared property getter: - (id)HTTPBodyStream;	// 0x30ec4d3d
// declared property getter: - (id)HTTPHeaders;	// 0x30ec3a89
// declared property getter: - (id)HTTPMethod;	// 0x30ec3c25
// declared property getter: - (id)URL;	// 0x30ec43b5
// declared property getter: - (id)URLBagKey;	// 0x30ec4219
// declared property getter: - (int)URLBagType;	// 0x30ec4ed9
// declared property getter: - (id)URLBagURLBlock;	// 0x30ec4fa9
// declared property getter: - (id)URLs;	// 0x30ec5159
- (id)_initCommon;	// 0x30ec1d81
// declared property getter: - (int)allowedRetryCount;	// 0x30ec34c5
// declared property getter: - (unsigned)cachePolicy;	// 0x30ec3595
// declared property getter: - (BOOL)canBeResolved;	// 0x30ec49e9
// declared property getter: - (id)clientIdentifier;	// 0x30ec3665
- (id)copyPropertyListEncoding;	// 0x30ec2e51
- (id)copyURLRequest;	// 0x30ec4b01
- (id)copyWithZone:(NSZone *)zone;	// 0x30ec2aed
- (void *)copyXPCEncoding;	// 0x30ec3191
- (void)dealloc;	// 0x30ec2025
- (id)description;	// 0x30ec4721
- (void)encodeWithCoder:(id)coder;	// 0x30ec2125
// declared property getter: - (long long)expectedContentLength;	// 0x30ec3801
- (BOOL)isEqual:(id)equal;	// 0x30ec47c5
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x30ec3dc1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30ec2afd
// declared property getter: - (id)requestParameters;	// 0x30ec3eb1
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x30ec404d
// declared property getter: - (double)timeoutInterval;	// 0x30ec4121
// declared property getter: - (id)userAgentComponents;	// 0x30ec4585
@end
