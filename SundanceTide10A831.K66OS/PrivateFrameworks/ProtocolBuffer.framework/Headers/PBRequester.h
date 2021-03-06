/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "ProtocolBuffer-Structs.h"

@class NSMutableData, NSURL, NSURLConnection, NSMutableArray, NSDictionary, NSMutableDictionary, PBDataReader, NSString, NSArray;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	id<PBRequesterDelegate> _delegate;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	PBDataReader *_dataReader;	// 20 = 0x14
	unsigned _lastGoodDataOffset;	// 24 = 0x18
	unsigned _uploadPayloadSize;	// 28 = 0x1c
	unsigned _downloadPayloadSize;	// 32 = 0x20
	unsigned long long _timeRequestSent;	// 36 = 0x24
	unsigned long long _timeResponseReceived;	// 44 = 0x2c
	int _responseStatusCode;	// 52 = 0x34
	NSMutableArray *_requests;	// 56 = 0x38
	NSMutableArray *_responses;	// 60 = 0x3c
	NSMutableArray *_internalRequests;	// 64 = 0x40
	NSMutableArray *_internalResponses;	// 68 = 0x44
	NSDictionary *_httpResponseHeaders;	// 72 = 0x48
	NSMutableDictionary *_httpRequestHeaders;	// 76 = 0x4c
	double _timeoutSeconds;	// 80 = 0x50
	CFRunLoopTimerRef _timeoutTimer;	// 88 = 0x58
	NSString *_logRequestToFile;	// 92 = 0x5c
	NSString *_logResponseToFile;	// 96 = 0x60
	BOOL _didNotifyRequestCompleted;	// 100 = 0x64
	NSArray *_clientCertificates;	// 104 = 0x68
	BOOL _shouldHandleCookies;	// 108 = 0x6c
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 109 = 0x6d
}
@property(retain, nonatomic) NSURL *URL;	// G=0x3288e571; S=0x3288e581; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x3288e66d; S=0x3288e67d; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x3288e5a1; S=0x3288e5b1; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x3288e591; S=0x3288c021; @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned downloadPayloadSize;	// G=0x3288e65d; @synthesize=_downloadPayloadSize
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x3288c369; S=0x3288c379; 
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x3288e5c1; S=0x3288e5d1; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x3288bfe9; S=0x3288bffd; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x3288c255; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x3288e60d; S=0x3288e61d; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x3288e62d; S=0x3288e63d; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x3288c0f9; S=0x3288c10d; 
@property(readonly, assign, nonatomic) unsigned requestResponseTime;	// G=0x3288e2ad; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x3288c145; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x3288e68d; S=0x3288e69d; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) double timeoutSeconds;	// G=0x3288e5e1; S=0x3288e5f9; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x3288e64d; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x3288e4b1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x3288bd29
// declared property getter: - (id)URL;	// 0x3288e571
- (id)_applicationID;	// 0x3288c521
- (void)_cancelNoNotify;	// 0x3288d079
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x3288d3cd
- (void)_cleanup;	// 0x3288bf11
- (void)_failWithError:(id)error;	// 0x3288d309
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x3288d35d
- (id)_languageLocale;	// 0x3288c43d
- (id)_osVersion;	// 0x3288c555
- (void)_removeTimeoutTimer;	// 0x3288e3e5
- (void)_resetTimeoutTimer;	// 0x3288e411
- (void)_sendPayload:(id)payload;	// 0x3288c849
- (void)_startTimeoutTimer;	// 0x3288e331
- (void)_timeoutTimerFired;	// 0x3288e459
- (BOOL)_tryParseData;	// 0x3288d569
- (void)addInternalRequest:(id)request;	// 0x3288c265
- (void)addRequest:(id)request;	// 0x3288c155
- (void)cancel;	// 0x3288d0e9
- (void)cancelWithErrorCode:(int)errorCode;	// 0x3288d459
// declared property getter: - (id)clientCertificates;	// 0x3288e66d
// declared property getter: - (id)connection;	// 0x3288e5a1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3288e219
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3288db2d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3288d931
- (void)connectionDidFinishLoading:(id)connection;	// 0x3288dd81
- (void)dealloc;	// 0x3288bdad
- (id)decodeResponseData:(id)data;	// 0x3288e4c1
// declared property getter: - (id)delegate;	// 0x3288e591
// declared property getter: - (unsigned)downloadPayloadSize;	// 0x3288e65d
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x3288e4b5
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x3288c365
// declared property getter: - (id)httpRequestHeaders;	// 0x3288c369
// declared property getter: - (id)httpResponseHeaders;	// 0x3288e5c1
// declared property getter: - (BOOL)ignoresResponse;	// 0x3288bfe9
// converted property getter: - (id)internalRequests;	// 0x3288c255
- (BOOL)isPaused;	// 0x3288d2a9
// declared property getter: - (id)logRequestToFile;	// 0x3288e60d
// declared property getter: - (id)logResponseToFile;	// 0x3288e62d
// declared property getter: - (BOOL)needsCancel;	// 0x3288c0f9
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x3288e4c9
- (id)newConnectionWithCFURLRequest:(CFURLRequestRef)cfurlrequest delegate:(id)delegate;	// 0x3288e4f9
- (void)pause;	// 0x3288d155
- (BOOL)readResponsePreamble:(id)preamble;	// 0x3288d485
- (id)requestPreamble;	// 0x3288c60d
// declared property getter: - (unsigned)requestResponseTime;	// 0x3288e2ad
// declared property getter: - (id)requests;	// 0x3288c145
- (id)responseForInternalRequest:(id)internalRequest;	// 0x3288c2d9
- (id)responseForRequest:(id)request;	// 0x3288c1c9
- (void)resume;	// 0x3288d2bd
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x3288e67d
// declared property setter: - (void)setConnection:(id)connection;	// 0x3288e5b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3288c021
- (void)setHttpRequestHeader:(id)header forKey:(id)key;	// 0x3288c3bd
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x3288c379
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x3288e5d1
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x3288bffd
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x3288e61d
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x3288e63d
- (void)setNeedsCancel;	// 0x3288c131
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x3288c10d
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x3288e69d
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x3288e5f9
// declared property setter: - (void)setURL:(id)url;	// 0x3288e581
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x3288e68d
- (void)start;	// 0x3288cbd9
// declared property getter: - (double)timeoutSeconds;	// 0x3288e5e1
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x3288d4e1
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x3288e64d
- (void)writeRequest:(id)request into:(id)into;	// 0x3288c799
@end

