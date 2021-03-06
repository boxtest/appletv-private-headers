/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ATVHSDAAPAssetData : XXUnknownSuperclass {
	NSData *_assetData;	// 4 = 0x4
	NSString *_assetString;	// 8 = 0x8
}
@property(retain, nonatomic) NSData *assetData;	// G=0x50f99; S=0x50fa9; @synthesize=_assetData
@property(retain, nonatomic) NSString *assetString;	// G=0x50fb9; S=0x50fc9; @synthesize=_assetString
- (id)initWithData:(id)data;	// 0x4f2e9
- (id)initWithString:(id)string;	// 0x4f331
// declared property getter: - (id)assetData;	// 0x50f99
- (id)assetPlaybackURLWithHSClient:(id)hsclient;	// 0x4f5c1
// declared property getter: - (id)assetString;	// 0x50fb9
- (unsigned long)codeForMediaKey:(id)mediaKey;	// 0x500ad
- (void)dealloc;	// 0x4f379
- (id)decryptedDRMTokenDataWithHSClient:(id)hsclient;	// 0x4f6a1
- (id)mediaKindListingFromData:(char *)data length:(unsigned long)length;	// 0x4f7d9
- (id)mediaTypeForMediaKind:(unsigned long)mediaKind;	// 0x50df9
// declared property setter: - (void)setAssetData:(id)data;	// 0x50fa9
// declared property setter: - (void)setAssetString:(id)string;	// 0x50fc9
- (id)valueForATVMediaKey:(id)atvmediaKey withHSDataClient:(id)hsdataClient;	// 0x4f3d1
- (id)valueForCode:(unsigned long)code;	// 0x4f4f9
- (id)valueForCode:(unsigned long)code data:(char *)data length:(unsigned long)length;	// 0x4f8c5
@end

