/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABWriterClient.h"
#import "OfficeImport-Structs.h"

@class WBWriter;

@interface WBOfficeArtWriterClient : OABWriterClient {
	WBWriter *mWriter;	// 4 = 0x4
}
@property(assign, nonatomic) WBWriter *writer;	// G=0x36c54b69; S=0x36c54b79; @synthesize=mWriter
+ (int)eshHorizontalPosition:(id)position;	// 0x36c54df1
+ (int)eshRelativeHorizontalPosition:(id)position;	// 0x36c54e11
+ (int)eshRelativeVerticalPosition:(id)position;	// 0x36c54e51
+ (int)eshVerticalPosition:(id)position;	// 0x36c54e31
+ (int)wrdRelativeHorizontalPosition:(id)position;	// 0x36c54e71
+ (int)wrdRelativeVerticalPosition:(id)position;	// 0x36c54e91
+ (int)wrdTextWrappingMode:(id)mode;	// 0x36c54eb1
+ (int)wrdTextWrappingModeType:(id)type;	// 0x36c54ed1
+ (void)writeFromClientAnchor:(id)clientAnchor toContentProperties:(EshContentProperties *)contentProperties;	// 0x36c54b89
// declared property setter: - (void)setWriter:(id)writer;	// 0x36c54b79
- (void)writeClientAnchorFromDrawable:(id)drawable toObject:(id)object state:(id)state;	// 0x36c54351
- (void)writeClientDataFromDrawable:(id)drawable toObject:(id)object state:(id)state;	// 0x36c5481d
- (void)writeClientTextFromShape:(id)shape toObject:(id)object state:(id)state;	// 0x36c54b65
// declared property getter: - (id)writer;	// 0x36c54b69
@end
