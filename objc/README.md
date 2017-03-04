# SwaggerClient

No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)

This ObjC package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 2.0.1
- Package version: 
- Build date: 2017-03-04T11:47:53.799-05:00
- Build package: class io.swagger.codegen.languages.ObjcClientCodegen

## Requirements

The SDK requires [**ARC (Automatic Reference Counting)**](http://stackoverflow.com/questions/7778356/how-to-enable-disable-automatic-reference-counting) to be enabled in the Xcode project.

## Installation & Usage
### Install from Github using [CocoaPods](https://cocoapods.org/)

Add the following to the Podfile:

```ruby
pod 'SwaggerClient', :git => 'https://github.com/GIT_USER_ID/GIT_REPO_ID.git'
```

To specify a particular branch, append `, :branch => 'branch-name-here'`

To specify a particular commit, append `, :commit => '11aa22'`

### Install from local path using [CocoaPods](https://cocoapods.org/)

Put the SDK under your project folder (e.g. /path/to/objc_project/Vendor/SwaggerClient) and then add the following to the Podfile:

```ruby
pod 'SwaggerClient', :path => 'Vendor/SwaggerClient'
```

### Usage

Import the following:

```objc
#import <SwaggerClient/SWGApiClient.h>
#import <SwaggerClient/SWGConfiguration.h>
// load models
#import <SwaggerClient/SWGCoordinate.h>
#import <SwaggerClient/SWGInlineResponse200.h>
#import <SwaggerClient/SWGInlineResponse200ProcessingTime.h>
#import <SwaggerClient/SWGInlineResponse400.h>
#import <SwaggerClient/SWGPlateCandidate.h>
#import <SwaggerClient/SWGPlateDetails.h>
#import <SwaggerClient/SWGRegionOfInterest.h>
#import <SwaggerClient/SWGVehicleCandidate.h>
#import <SwaggerClient/SWGVehicleDetails.h>
// load API classes for accessing endpoints
#import <SwaggerClient/SWGDefaultApi.h>

```

## Recommendation

It's recommended to create an instance of ApiClient per thread in a multi-threaded environment to avoid any potential issue.

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```objc


NSString* *imageBytes = imageBytes_example; // The image file that you wish to analyze encoded in base64 
NSString* *secretKey = @"secretKey_example"; // The secret key used to authenticate your account.  You can view your  secret key by visiting  https://cloud.openalpr.com/ 
NSString* *country = @"country_example"; // Defines the training data used by OpenALPR.  \"us\" analyzes  North-American style plates.  \"eu\" analyzes European-style plates.  This field is required if using the \"plate\" task  You may use multiple datasets by using commas between the country  codes.  For example, 'au,auwide' would analyze using both the  Australian plate styles.  A full list of supported country codes  can be found here https://github.com/openalpr/openalpr/tree/master/runtime_data/config 
NSNumber* *recognizeVehicle = @0; // If set to 1, the vehicle will also be recognized in the image This requires an additional credit per request  (optional) (default to 0)
NSString* *state = @""; // Corresponds to a US state or EU country code used by OpenALPR pattern  recognition.  For example, using \"md\" matches US plates against the  Maryland plate patterns.  Using \"fr\" matches European plates against  the French plate patterns.  (optional) (default to )
NSNumber* *returnImage = @0; // If set to 1, the image you uploaded will be encoded in base64 and  sent back along with the response  (optional) (default to 0)
NSNumber* *topn = @10; // The number of results you would like to be returned for plate  candidates and vehicle classifications  (optional) (default to 10)
NSString* *prewarp = @""; // Prewarp configuration is used to calibrate the analyses for the  angle of a particular camera.  More information is available here http://doc.openalpr.com/accuracy_improvements.html#calibration  (optional) (default to )

SWGDefaultApi *apiInstance = [[SWGDefaultApi alloc] init];

[apiInstance recognizeBytesWithImageBytes:imageBytes
    secretKey:secretKey
    country:country
    recognizeVehicle:recognizeVehicle
    state:state
    returnImage:returnImage
    topn:topn
    prewarp:prewarp
              completionHandler: ^(SWGInlineResponse200* output, NSError* error) {
                            if (output) {
                                NSLog(@"%@", output);
                            }
                            if (error) {
                                NSLog(@"Error: %@", error);
                            }
                        }];

```

## Documentation for API Endpoints

All URIs are relative to *https://api.openalpr.com/v2*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*SWGDefaultApi* | [**recognizeBytes**](docs/SWGDefaultApi.md#recognizebytes) | **POST** /recognize_bytes | 
*SWGDefaultApi* | [**recognizeFile**](docs/SWGDefaultApi.md#recognizefile) | **POST** /recognize | 
*SWGDefaultApi* | [**recognizeUrl**](docs/SWGDefaultApi.md#recognizeurl) | **POST** /recognize_url | 


## Documentation For Models

 - [SWGCoordinate](docs/SWGCoordinate.md)
 - [SWGInlineResponse200](docs/SWGInlineResponse200.md)
 - [SWGInlineResponse200ProcessingTime](docs/SWGInlineResponse200ProcessingTime.md)
 - [SWGInlineResponse400](docs/SWGInlineResponse400.md)
 - [SWGPlateCandidate](docs/SWGPlateCandidate.md)
 - [SWGPlateDetails](docs/SWGPlateDetails.md)
 - [SWGRegionOfInterest](docs/SWGRegionOfInterest.md)
 - [SWGVehicleCandidate](docs/SWGVehicleCandidate.md)
 - [SWGVehicleDetails](docs/SWGVehicleDetails.md)


## Documentation For Authorization

 All endpoints do not require authorization.


## Author



