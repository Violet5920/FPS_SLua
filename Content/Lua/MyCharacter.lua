
local myCharacter = {}

local validNum = 0.00001
--Override Base
------------------------------

--function myCharacter:ReceiveBeginPlay()


--end


--Character Input
------------------------------

--前后移动
function myCharacter:MoveForward(delta)
    if math.abs(delta) < validNum then
        return
    end
    
    local KismetMath = import "KismetMathLibrary"
    local Direction = KismetMath.GetForwardVector(self:K2_GetActorRotation())
    self:AddMovementInput(Direction, delta, false)
end

--左右移动
function myCharacter:MoveRight(delta)
    if math.abs(delta) < validNum then
        return
    end

    local KismetMath = import "KismetMathLibrary"
    local Direction = KismetMath.GetRightVector(self:K2_GetActorRotation())
    self:AddMovementInput(Direction, delta, false)
end

--上下扫视
function myCharacter:Lookup(delta)
    if math.abs(delta) < validNum then
        return
    end

    self:AddControllerPitchInput(delta)
end

--左右扫视
function myCharacter:Turn(delta)
    if math.abs(delta) < validNum then
        return
    end

    self:AddControllerYawInput(delta)
end

--跳跃
function myCharacter:OnJumpStart() 
    self:Jump()
end

--停止跳跃
function myCharacter:OnJumpEnd()
    self:StopJumping()
end

function myCharacter:OnStartFire()
    local GameplayStatics = import "GameplayStatics"
    local GameInstance = GameplayStatics.GetGameInstance(self:GetWorld())
end


return myCharacter
