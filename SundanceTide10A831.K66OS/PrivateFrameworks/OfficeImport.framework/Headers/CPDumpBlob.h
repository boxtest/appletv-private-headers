/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"


@interface CPDumpBlob : CPDumpType {
	int mSize;	// 8 = 0x8
}
- (id)initWithSize_:(int)size_;	// 0x36ccf8dd
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x36ccf91d
@end

