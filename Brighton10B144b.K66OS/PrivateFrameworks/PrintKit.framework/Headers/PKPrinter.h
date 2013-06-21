/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface PKPrinter : NSObject {
	NSString *name;	// 4 = 0x4
	int type;	// 8 = 0x8
	int accessState;	// 12 = 0xc
	NSDictionary *printInfoSupported;	// 16 = 0x10
	http_s *job_http;	// 20 = 0x14
	NSMutableDictionary *privateData;	// 24 = 0x18
	NSMutableSet *mediaReady;	// 28 = 0x1c
	NSMutableDictionary *specialFeedOrientation;	// 32 = 0x20
	int maxPDFKBytes;	// 36 = 0x24
	int maxJPEGKBytes;	// 40 = 0x28
	int maxJPEGXDimension;	// 44 = 0x2c
	int maxJPEGYDimension;	// 48 = 0x30
	int maxCopies;	// 52 = 0x34
	int preferred_landscape;	// 56 = 0x38
	BOOL isLocal;	// 60 = 0x3c
	BOOL hasIdentifyPrinterOp;	// 61 = 0x3d
	int kind;	// 64 = 0x40
}
@property(retain) NSDictionary *TXTRecord;	// G=0x3531a42d; S=0x3531a709; @dynamic
@property(readonly, assign) int accessState;	// G=0x35319ad5; @synthesize
@property(assign) int accessState;	// S=0x3531a1ed; @dynamic
@property(readonly, assign) BOOL hasIdentifyPrinterOp;	// G=0x35319b19; @synthesize
@property(readonly, assign) BOOL hasPrintInfoSupported;	// G=0x35316c55; @dynamic
@property(retain) NSString *hostname;	// G=0x3531a79d; S=0x3531a7ed; @dynamic
@property(readonly, assign) BOOL isAdobeRGBSupported;	// G=0x353183d5; @dynamic
@property(readonly, assign) BOOL isIPPS;	// G=0x35318511; @dynamic
@property(assign) BOOL isLocal;	// G=0x35319ae9; S=0x35319b01; @synthesize
@property(readonly, assign) int kind;	// G=0x35319aad; @synthesize
@property(readonly, assign) NSString *name;	// G=0x35319a99; @synthesize
@property(retain) NSNumber *port;	// G=0x3531a80d; S=0x3531a85d; @dynamic
@property(readonly, assign) NSDictionary *printInfoSupported;	// G=0x35317001; 
@property(readonly, assign) NSString *scheme;	// G=0x3531a87d; 
@property(readonly, assign) int type;	// G=0x35319ac1; @synthesize
@property(readonly, assign) NSString *uuid;	// G=0x35318541; @dynamic
+ (ipp_s *)getAttributes:(const char **)attributes count:(int)count fromURI:(id)uri;	// 0x35319e81
+ (id)hardcodedURIs;	// 0x35319825
+ (id)nameForHardcodedURI:(id)hardcodedURI;	// 0x35319949
+ (BOOL)printerLookupWithName:(id)name andTimeout:(double)timeout;	// 0x353166c1
+ (id)printerWithName:(id)name;	// 0x35316589
+ (id)requiredPDL;	// 0x3531c611
+ (BOOL)urfIsOptional;	// 0x3531c5a5
- (id)initWithName:(id)name TXT:(id)txt;	// 0x35319fb5
- (id)initWithName:(id)name TXTRecord:(id)record;	// 0x3531a0e1
// declared property getter: - (id)TXTRecord;	// 0x3531a42d
- (int)abortJob;	// 0x35318705
// declared property getter: - (int)accessState;	// 0x35319ad5
- (void)aggdAppsAndPrinters;	// 0x353169b9
- (void)cancelUnlock;	// 0x35319631
- (void)checkOperations:(ipp_s *)operations;	// 0x35316fad
- (ipp_s *)createRequest:(id)request ofType:(id)type url:(id)url;	// 0x3531ae1d
- (void)dealloc;	// 0x35316781
- (id)description;	// 0x35316825
- (id)displayName;	// 0x35316835
- (int)feedOrientation:(id)orientation;	// 0x35316b65
- (int)finalizeJob:(int)job;	// 0x3531b479
- (int)finishJob;	// 0x35318719
- (ipp_s *)getPrinterAttributes;	// 0x35319b31
// declared property getter: - (BOOL)hasIdentifyPrinterOp;	// 0x35319b19
// declared property getter: - (BOOL)hasPrintInfoSupported;	// 0x35316c55
// declared property getter: - (id)hostname;	// 0x3531a79d
- (void)identifySelf;	// 0x35316c7d
// declared property getter: - (BOOL)isAdobeRGBSupported;	// 0x353183d5
- (BOOL)isBonjour;	// 0x35316631
// declared property getter: - (BOOL)isIPPS;	// 0x35318511
// declared property getter: - (BOOL)isLocal;	// 0x35319ae9
- (BOOL)isPaperReady:(id)ready;	// 0x35316bf5
// declared property getter: - (int)kind;	// 0x35319aad
- (BOOL)knowsReadyPaperList;	// 0x35316c3d
- (id)localName;	// 0x3531b7c5
- (id)location;	// 0x35316985
- (id)matchedPaper:(id)paper preferBorderless:(BOOL)borderless withDuplexMode:(id)duplexMode didMatch:(BOOL *)match;	// 0x35318d85
// declared property getter: - (id)name;	// 0x35319a99
- (ipp_s *)newMediaColFromPaper:(id)paper Source:(id)source Type:(id)type DoMargins:(BOOL)margins;	// 0x3531ac81
- (id)paperListForDuplexMode:(id)duplexMode;	// 0x35318575
// declared property getter: - (id)port;	// 0x3531a80d
// declared property getter: - (id)printInfoSupported;	// 0x35317001
- (int)printURL:(id)url ofType:(id)type printSettings:(id)settings;	// 0x3531872d
- (id)privateObjectForKey:(id)key;	// 0x3531c3c5
- (void)reconfirmWithForce:(BOOL)force;	// 0x3531966d
- (void)resolve;	// 0x3531a92d
- (BOOL)resolveWithTimeout:(int)timeout;	// 0x3531a941
// declared property getter: - (id)scheme;	// 0x3531a87d
- (int)sendData:(const char *)data ofLength:(int)length;	// 0x35318b0d
// declared property setter: - (void)setAccessState:(int)state;	// 0x3531a1ed
- (void)setAccessStateFromTXT:(id)txt;	// 0x3531a3b5
// declared property setter: - (void)setHostname:(id)hostname;	// 0x3531a7ed
// declared property setter: - (void)setIsLocal:(BOOL)local;	// 0x35319b01
// declared property setter: - (void)setPort:(id)port;	// 0x3531a85d
- (void)setPrivateObject:(id)object forKey:(id)key;	// 0x3531c4c1
// declared property setter: - (void)setTXTRecord:(id)record;	// 0x3531a709
- (int)startJob:(id)job ofType:(id)type;	// 0x35318b61
// declared property getter: - (int)type;	// 0x35319ac1
- (void)unlockWithCompletionHandler:(id)completionHandler;	// 0x35318f59
- (void)updateType;	// 0x3531a1fd
// declared property getter: - (id)uuid;	// 0x35318541
@end
