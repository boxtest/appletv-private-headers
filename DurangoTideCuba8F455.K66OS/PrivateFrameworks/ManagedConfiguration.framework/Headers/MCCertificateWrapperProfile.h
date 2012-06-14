/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCConfigurationProfile.h"


@interface MCCertificateWrapperProfile : MCConfigurationProfile {
}
+ (id)_basicWrapperProfileForCertificateName:(id)certificateName fileName:(id)name identifier:(id)identifier;	// 0x340fbd65
+ (id)_identifierHashFromData:(id)data;	// 0x340fc301
+ (id)_wrapperPayloadDictWithCertData:(id)certData fileName:(id)name name:(id)name3 identifier:(id)identifier type:(id)type;	// 0x340fbf05
+ (id)_wrapperProfileForCertificate:(SecCertificate *)certificate fileName:(id)name certData:(id)data type:(id)type;	// 0x340fc465
+ (id)_wrapperProfileForWAPICertificate:(SecCertificate *)wapicertificate fileName:(id)name PEMData:(id)data;	// 0x340fc3b1
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)pemdata fileName:(id)name name:(id)name3 identifier:(id)identifier;	// 0x340fbe3d
+ (id)wrapperProfileDictionaryWithCertificateData:(id)certificateData fileName:(id)name;	// 0x340fc51d
- (id)initWithDictionary:(id)dictionary originalData:(id)data allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x340fc0b9
- (id)_certificatePayload;	// 0x340fc041
- (id)earliestCertificateExpiryDate;	// 0x340fbff9
- (BOOL)isSigned;	// 0x340fc01d
- (id)stubDictionary;	// 0x340fc065
- (int)trustLevel;	// 0x340fc239
@end
