import torch


# Generate Sub operator with Float32, Rank-4
class net_sub(torch.nn.Module):
    def __init__(self):
        super().__init__()

    def forward(self, inputs):
        return torch.sub(inputs[0], inputs[1])

    def onnx_opset_version(self):
        # TODO set version
        return 14


_model_ = net_sub()

_inputs_ = [torch.randn(1, 2, 3, 3), torch.randn(1, 2, 3, 3)]
