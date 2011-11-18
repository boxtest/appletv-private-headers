/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary, NSData, NSInputStream, NSURL, NSString, SSMutableURLRequestProperties, NSLock;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
	NSLock *_lock;	// 4 = 0x4
	SSMutableURLRequestProperties *_properties;	// 8 = 0x8
}
@property(retain) NSData *HTTPBody;	// G=0x33dbb1dd; S=0x33dbb31d; 
@property(retain) NSInputStream *HTTPBodyStream;	// G=0x33dbb1fd; S=0x33dbb33d; 
@property(retain) NSString *HTTPMethod;	// G=0x33dbb21d; S=0x33dbb35d; 
@property(assign) int URLBagType;	// G=0x33dbb45d; S=0x33dbb3bd; 
@property(retain) NSArray *URLs;	// G=0x33dbb47d; S=0x33dbb3dd; 
@property(assign) int allowedRetryCount;	// G=0x33dbb13d; S=0x33dbb27d; 
@property(retain) NSString *appleClientApplication;	// G=0x33dbb15d; S=0x33dbb29d; 
@property(assign) unsigned cachePolicy;	// G=0x33dbb17d; S=0x33dbb2bd; 
@property(retain) NSDictionary *customHeaders;	// G=0x33dbb19d; S=0x33dbb2dd; 
@property(assign) long long expectedContentLength;	// G=0x33dbb1bd; S=0x33dbb2fd; 
@property(readonly, assign) NSURL *primaryURL;	// G=0x33dbb25d; 
@property(retain) NSDictionary *queryStringDictionary;	// G=0x33dbb23d; S=0x33dbb37d; 
@property(assign) double timeoutInterval;	// G=0x33dbb43d; S=0x33dbb39d; 
+ (id)requestWithURL:(id)url;	// 0x33dbb101
- (id)init;	// 0x33dbaad5
- (id)initWithCoder:(id)coder;	// 0x33dbace1
- (id)initWithRequestProperties:(id)requestProperties;	// 0x33dbaae9
- (id)initWithURL:(id)url;	// 0x33dbabad
- (id)initWithURLRequest:(id)urlrequest;	// 0x33dbab3d
// declared property getter: - (id)HTTPBody;	// 0x33dbb1dd
// declared property getter: - (id)HTTPBodyStream;	// 0x33dbb1fd
// declared property getter: - (id)HTTPMethod;	// 0x33dbb21d
// declared property getter: - (int)URLBagType;	// 0x33dbb45d
// declared property getter: - (id)URLs;	// 0x33dbb47d
- (id)_initCommon;	// 0x33dbaa4d
// declared property getter: - (int)allowedRetryCount;	// 0x33dbb13d
// declared property getter: - (id)appleClientApplication;	// 0x33dbb15d
// declared property getter: - (unsigned)cachePolicy;	// 0x33dbb17d
- (id)copyWithZone:(NSZone *)zone;	// 0x33dbafe9
// declared property getter: - (id)customHeaders;	// 0x33dbb19d
- (void)dealloc;	// 0x33dbabed
- (void)encodeWithCoder:(id)coder;	// 0x33dbac4d
// declared property getter: - (long long)expectedContentLength;	// 0x33dbb1bd
- (BOOL)isEqual:(id)equal;	// 0x33dbb081
// declared property getter: - (id)primaryURL;	// 0x33dbb25d
// declared property getter: - (id)queryStringDictionary;	// 0x33dbb23d
- (id)requestProperties;	// 0x33dbb49d
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x33dbb27d
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x33dbb29d
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x33dbb2bd
// declared property setter: - (void)setCustomHeaders:(id)headers;	// 0x33dbb2dd
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x33dbb2fd
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x33dbb31d
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x33dbb33d
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x33dbb35d
// declared property setter: - (void)setQueryStringDictionary:(id)dictionary;	// 0x33dbb37d
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x33dbb39d
// declared property setter: - (void)setURLBagType:(int)type;	// 0x33dbb3bd
// declared property setter: - (void)setURLs:(id)urls;	// 0x33dbb3dd
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x33dbb3fd
- (void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;	// 0x33dbb41d
// declared property getter: - (double)timeoutInterval;	// 0x33dbb43d
@end

