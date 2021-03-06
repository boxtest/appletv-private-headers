/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x34cc73ed
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x34e78bd5
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x34cc7171
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x34e78441
+ (id)readBlipFromBse:(id)bse;	// 0x34c3b339
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x34c3b425
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x34e7843d
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x34e78981
+ (EshBlip *)writeBlip:(id)blip;	// 0x34e78559
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x34e78895
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x34e78539
@end

