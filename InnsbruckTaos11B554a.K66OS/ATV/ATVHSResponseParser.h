/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSData;

__attribute__((visibility("hidden")))
@interface ATVHSResponseParser : XXUnknownSuperclass {
	char *_bytePtr;	// 4 = 0x4
	unsigned long _byteOffset;	// 8 = 0x8
	unsigned long _dataLength;	// 12 = 0xc
	NSData *_responseData;	// 16 = 0x10
	ATVDataClient *_dataClient;	// 20 = 0x14
}
@property(assign, nonatomic) ATVDataClient *dataClient;	// G=0x3e785; S=0x3e795; @synthesize=_dataClient
@property(retain, nonatomic) NSData *responseData;	// G=0x3e74d; S=0x3e75d; @synthesize=_responseData
- (id)initWithResponse:(id)response dataClient:(id)client;	// 0x3d645
- (void).cxx_destruct;	// 0x3e7a5
// declared property getter: - (id)dataClient;	// 0x3e785
- (unsigned long)intValueForCode:(unsigned long)code;	// 0x3e6c9
- (id)parseDAAPResponseWithQuery:(id)query responseCode:(unsigned long)code contentSize:(unsigned long)size;	// 0x3d8d5
- (id)parseDMAPErrorResponseWithQuery:(id)query;	// 0x3d859
- (id)parseDPAPResponseWithQuery:(id)query responseCode:(unsigned long)code contentSize:(unsigned long)size;	// 0x3e3e9
- (id)parseWithQuery:(id)query error:(id *)error;	// 0x3d6c1
// declared property getter: - (id)responseData;	// 0x3e74d
// declared property setter: - (void)setDataClient:(id)client;	// 0x3e795
// declared property setter: - (void)setResponseData:(id)data;	// 0x3e75d
- (unsigned long)unsignedIntValue;	// 0x3e6a1
@end

