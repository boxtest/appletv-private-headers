/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSMutableURLRequest, NSMutableData, NSHTTPURLResponse, NSString, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSXMLHttpRequest : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_object;	// 8 = 0x8
	BOOL _isObjectProtected;	// 12 = 0xc
	unsigned _readyState;	// 16 = 0x10
	NSMutableURLRequest *_urlRequest;	// 20 = 0x14
	NSURLConnection *_urlConnection;	// 24 = 0x18
	BOOL _async;	// 28 = 0x1c
	NSString *_user;	// 32 = 0x20
	NSString *_password;	// 36 = 0x24
	NSHTTPURLResponse *_urlResponse;	// 40 = 0x28
	unsigned _statusCode;	// 44 = 0x2c
	NSString *_statusText;	// 48 = 0x30
	NSMutableData *_receivedData;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned readyState;	// G=0x182a19; S=0x182021; @synthesize=_readyState
@property(retain) NSMutableData *receivedData;	// G=0x182ad9; S=0x182aed; @synthesize=_receivedData
@property(assign, nonatomic) unsigned statusCode;	// G=0x182a95; S=0x182aa5; @synthesize=_statusCode
@property(copy) NSString *statusText;	// G=0x182ab5; S=0x182ac9; @synthesize=_statusText
@property(retain) NSURLConnection *urlConnection;	// G=0x182a4d; S=0x182a61; @synthesize=_urlConnection
@property(retain) NSMutableURLRequest *urlRequest;	// G=0x182a29; S=0x182a3d; @synthesize=_urlRequest
@property(retain) NSHTTPURLResponse *urlResponse;	// G=0x182a71; S=0x182a85; @synthesize=_urlResponse
+ (void)registerClassInContext:(OpaqueJSContext *)context;	// 0x1810e5
- (id)initWithContext:(id)context jsObject:(OpaqueJSValue *)object;	// 0x181ed1
- (void)_jsObjectWasFinalized;	// 0x182945
- (void)_unprotectJSObjectIfNecessary;	// 0x182965
- (void)abort;	// 0x182635
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x182825
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x1827e1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x182725
- (void)connectionDidFinishLoading:(id)connection;	// 0x1828ed
- (void)dealloc;	// 0x181f45
- (void)openWithMethod:(id)method url:(id)url async:(BOOL)async user:(id)user password:(id)password;	// 0x182141
// declared property getter: - (unsigned)readyState;	// 0x182a19
// declared property getter: - (id)receivedData;	// 0x182ad9
- (void)sendWithData:(id)data jsContext:(OpaqueJSContext *)context;	// 0x18228d
// declared property setter: - (void)setReadyState:(unsigned)state;	// 0x182021
// declared property setter: - (void)setReceivedData:(id)data;	// 0x182aed
// declared property setter: - (void)setStatusCode:(unsigned)code;	// 0x182aa5
// declared property setter: - (void)setStatusText:(id)text;	// 0x182ac9
// declared property setter: - (void)setUrlConnection:(id)connection;	// 0x182a61
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x182a3d
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x182a85
// declared property getter: - (unsigned)statusCode;	// 0x182a95
// declared property getter: - (id)statusText;	// 0x182ab5
// declared property getter: - (id)urlConnection;	// 0x182a4d
// declared property getter: - (id)urlRequest;	// 0x182a29
// declared property getter: - (id)urlResponse;	// 0x182a71
@end

