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
@private
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
@property(retain) NSDictionary *TXTRecord;	// G=0x314e9709; S=0x314e99e5; @dynamic
@property(readonly, assign) int accessState;	// G=0x314e8db1; @synthesize
@property(assign) int accessState;	// S=0x314e94c9; @dynamic
@property(readonly, assign) BOOL hasIdentifyPrinterOp;	// G=0x314e8df5; @synthesize
@property(readonly, assign) BOOL hasPrintInfoSupported;	// G=0x314e6089; @dynamic
@property(retain) NSString *hostname;	// G=0x314e9a79; S=0x314e9ac9; @dynamic
@property(readonly, assign) BOOL isAdobeRGBSupported;	// G=0x314e76d1; @dynamic
@property(readonly, assign) BOOL isIPPS;	// G=0x314e780d; @dynamic
@property(assign) BOOL isLocal;	// G=0x314e8dc5; S=0x314e8ddd; @synthesize
@property(readonly, assign) int kind;	// G=0x314e8d89; @synthesize
@property(readonly, assign) NSString *name;	// G=0x314e8d75; @synthesize
@property(retain) NSNumber *port;	// G=0x314e9ae9; S=0x314e9b39; @dynamic
@property(readonly, assign) NSDictionary *printInfoSupported;	// G=0x314e6439; 
@property(readonly, assign) NSString *scheme;	// G=0x314e9b59; 
@property(readonly, assign) int type;	// G=0x314e8d9d; @synthesize
@property(readonly, assign) NSString *uuid;	// G=0x314e783d; @dynamic
+ (ipp_s *)getAttributes:(const char **)attributes count:(int)count fromURI:(id)uri;	// 0x314e915d
+ (id)hardcodedURIs;	// 0x314e8b01
+ (id)nameForHardcodedURI:(id)hardcodedURI;	// 0x314e8c25
+ (BOOL)printerLookupWithName:(id)name andTimeout:(double)timeout;	// 0x314e5ca1
+ (id)printerWithName:(id)name;	// 0x314e5b69
+ (id)requiredPDL;	// 0x314eb8ed
+ (BOOL)urfIsOptional;	// 0x314eb881
- (id)initWithName:(id)name TXT:(id)txt;	// 0x314e9291
- (id)initWithName:(id)name TXTRecord:(id)record;	// 0x314e93bd
// declared property getter: - (id)TXTRecord;	// 0x314e9709
- (int)abortJob;	// 0x314e7a01
// declared property getter: - (int)accessState;	// 0x314e8db1
- (void)cancelUnlock;	// 0x314e890d
- (void)checkOperations:(ipp_s *)operations;	// 0x314e63e1
- (ipp_s *)createRequest:(id)request ofType:(id)type url:(id)url;	// 0x314ea0f9
- (void)dealloc;	// 0x314e5d61
- (id)description;	// 0x314e5e05
- (id)displayName;	// 0x314e5e15
- (int)feedOrientation:(id)orientation;	// 0x314e5f99
- (int)finalizeJob:(int)job;	// 0x314ea755
- (int)finishJob;	// 0x314e7a15
- (ipp_s *)getPrinterAttributes;	// 0x314e8e0d
// declared property getter: - (BOOL)hasIdentifyPrinterOp;	// 0x314e8df5
// declared property getter: - (BOOL)hasPrintInfoSupported;	// 0x314e6089
// declared property getter: - (id)hostname;	// 0x314e9a79
- (void)identifySelf;	// 0x314e60b1
// declared property getter: - (BOOL)isAdobeRGBSupported;	// 0x314e76d1
- (BOOL)isBonjour;	// 0x314e5c11
// declared property getter: - (BOOL)isIPPS;	// 0x314e780d
// declared property getter: - (BOOL)isLocal;	// 0x314e8dc5
- (BOOL)isPaperReady:(id)ready;	// 0x314e6029
// declared property getter: - (int)kind;	// 0x314e8d89
- (BOOL)knowsReadyPaperList;	// 0x314e6071
- (id)localName;	// 0x314eaaa1
- (id)location;	// 0x314e5f65
- (id)matchedPaper:(id)paper preferBorderless:(BOOL)borderless withDuplexMode:(id)duplexMode didMatch:(BOOL *)match;	// 0x314e8061
// declared property getter: - (id)name;	// 0x314e8d75
- (ipp_s *)newMediaColFromPaper:(id)paper Source:(id)source Type:(id)type DoMargins:(BOOL)margins;	// 0x314e9f5d
- (id)paperListForDuplexMode:(id)duplexMode;	// 0x314e7871
// declared property getter: - (id)port;	// 0x314e9ae9
// declared property getter: - (id)printInfoSupported;	// 0x314e6439
- (int)printURL:(id)url ofType:(id)type printSettings:(id)settings;	// 0x314e7a29
- (id)privateObjectForKey:(id)key;	// 0x314eb6a1
- (void)reconfirmWithForce:(BOOL)force;	// 0x314e8949
- (void)resolve;	// 0x314e9c09
- (BOOL)resolveWithTimeout:(int)timeout;	// 0x314e9c1d
// declared property getter: - (id)scheme;	// 0x314e9b59
- (int)sendData:(const char *)data ofLength:(int)length;	// 0x314e7df9
// declared property setter: - (void)setAccessState:(int)state;	// 0x314e94c9
- (void)setAccessStateFromTXT:(id)txt;	// 0x314e9691
// declared property setter: - (void)setHostname:(id)hostname;	// 0x314e9ac9
// declared property setter: - (void)setIsLocal:(BOOL)local;	// 0x314e8ddd
// declared property setter: - (void)setPort:(id)port;	// 0x314e9b39
- (void)setPrivateObject:(id)object forKey:(id)key;	// 0x314eb79d
// declared property setter: - (void)setTXTRecord:(id)record;	// 0x314e99e5
- (int)startJob:(id)job ofType:(id)type;	// 0x314e7e4d
// declared property getter: - (int)type;	// 0x314e8d9d
- (void)unlockWithCompletionHandler:(id)completionHandler;	// 0x314e8235
- (void)updateType;	// 0x314e94d9
// declared property getter: - (id)uuid;	// 0x314e783d
@end

